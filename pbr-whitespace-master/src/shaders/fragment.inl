/* File generated with Shader Minifier 1.1.4
* http://www.ctrl-alt-test.fr
*/
#ifndef SHADER_CODE_H_
# define SHADER_CODE_H_

const char *fragment_glsl =
"uniform int tt;"
"uniform vec2 V;"
"uniform vec3 M;"
"float T = tt * .001;"
"const vec3 v=vec3(0.,.001,1.);"
"const float m=3.14159;"
"float f(float v)"
"{"
"return fract(sin(v)*43758.5);"
"}"
"float x(vec2 v)"
"{"
"return fract(10000.*sin(17.*v.r+.1*v.g)*(.1+abs(sin(13.*v.g+v.r))));"
"}"
"float s(vec3 v)"
"{"
"return x(vec2(x(v.rg),v.b));"
"}"
"float n(vec2 m)"
"{"
"vec2 f=floor(m);"
"m-=f;"
"m*=m*(3.-2.*m);"
"return mix(mix(x(f),x(f+v.br),m.r),mix(x(f+v.rb),x(f+v.bb),m.r),m.g);"
"}"
"float d(vec3 m)"
"{"
"vec3 f=floor(m);"
"m-=f;"
"m*=m*(3.-2.*m);"
"return mix(mix(mix(s(f),s(f+v.brr),m.r),mix(s(f+v.rbr),s(f+v.bbr),m.r),m.g),mix(mix(s(f+v.rrb),s(f+v.brb),m.r),mix(s(f+v.rbb),s(f+v.bbb),m.r),m.g),m.b);"
"}"
"float t(float v)"
"{"
"float m=floor(v);"
"v-=m;"
"v*=v*(3.-2.*v);"
"return mix(f(m),f(m+1.),v);"
"}"
"float d(vec2 v,vec2 r)"
"{"
"return v=abs(v)-r,max(v.r,v.g);"
"}"
"float f(vec3 v,vec3 r)"
"{"
"return v=abs(v)-r,max(v.r,max(v.g,v.b));"
"}"
"mat3 r(float v)"
"{"
"float m=sin(v),r=cos(v);"
"return mat3(1.,0.,0.,0.,r,-m,0.,m,r);"
"}"
"mat3 p(float v)"
"{"
"float m=sin(v),f=cos(v);"
"return mat3(f,0.,m,0.,1.,0,-m,0.,f);"
"}"
"mat3 e(float v)"
"{"
"float m=sin(v),f=cos(v);"
"return mat3(f,m,0.,-m,f,0.,0.,0.,1.);"
"}"
"float e(vec3 v,float m)"
"{"
"return length(v)-m;"
"}"
"vec3 n(vec3 v,vec3 m)"
"{"
"return mod(v,m)-m*.5;"
"}"
"vec2 p(vec2 v,vec2 m)"
"{"
"return mod(v,m)-m*.5;"
"}"
"float d(vec3 v,float m,float f,float r)"
"{"
"float b=length(v);"
"return max(abs(v.g)-r,max(b-f,m-b));"
"}"
"float i(vec2 v)"
"{"
"return max(v.r,v.g);"
"}"
"float K(vec3 v)"
"{"
"v=p(T*.1)*v;"
"const float m=2.8;"
"const int r=5;"
"vec3 a=vec3(1.1,.9,1.9);"
"for(int b=0;b<r;++b)"
"{"
"v=v*p(.1+T*.3);"
"v=abs(v);"
"v.rg+=step(v.r,v.g)*(v.gr-v.rg);"
"v.rb+=step(v.r,v.b)*(v.br-v.rb);"
"v.gb+=step(v.g,v.b)*(v.bg-v.gb);"
"v=v*e(.1);"
"v.rg=v.rg*m-(m-1.)*a.rg;"
"v.b=m*v.b;"
"if(v.b>.5*a.b*(m-1.))"
"v.b-=a.b*(m-1.);"
"}"
"return f(v,vec3(1.))*pow(m,-float(r));"
"}"
"bool b=true,g=false,O_=false;"
"int A_=0;\n"
"#define PICK(d,dn,mn)if(O_){if(dn<d){d=dn;A_=mn;}}else d=min(d,dn);\n"
"float c(vec3 v)"
"{"
"float m=i(abs(v.rg)-vec2(2.,.1));"
"if(g)"
"m=m+max(0.,.2*d(p(v.rb,vec2(.1)),vec2(.01)));"
"v.r=abs(v.r)+.02;"
"float f=i(abs(v.rg-vec2(2.,1.))-vec2(.02)),r=max(abs(mod(v.b,.4)-.2)-.02,max(abs(v.g-.5)-.5,abs(v.r-2.)-.02));"
"return min(m,min(f,r));"
"}"
"float h(vec3 v)"
"{"
"return f(v-vec3(33.,1.6,0.),vec3(20.,1.5,1.96));"
"}\n"
"#define LN 5\n"
"vec3 P[LN],l[LN];"
"void K()"
"{"
"float v=11.;"
"P[0]=vec3(v,6.,v);"
"P[1]=vec3(v,6.,-v);"
"P[2]=vec3(-v,6.,-v);"
"P[3]=vec3(-v,6.,v);"
"P[4]=vec3(0.);"
"l[0]=30.*vec3(.7,.35,.45)*mix(1.,t(T*20.),.3);"
"l[1]=30.*vec3(.7,.35,.15)*mix(1.,t(T*20.+10.),.3);"
"l[2]=30.*vec3(.3,.35,.75)*mix(1.,t(T*20.+20.),.3);"
"l[3]=30.*vec3(.7,.35,.15)*mix(1.,t(T*20.+30.),.3);"
"l[4]=smoothstep(44.,50.,T)*50.*vec3(1.)*mix(1.,t(T*20.+30.),.3);"
"}"
"float w(vec3 v)"
"{"
"float m=100000.;"
"if(b)"
"for(int r=0;r<LN;++r)"
"PICK(m,length(v-P[r])-.1,r+100);"
"float r=length(v.rb),a=atan(v.r,v.b),t=length(v),s=-min(h(vec3(abs(v.r),v.gb)),h(vec3(abs(v.b),v.gr))),o=max(-e(v,19.),f(n(v,vec3(2.)),vec3(.8))),x=-e(v,20.);"
"PICK(m,x,1);"
"PICK(m,o,2);"
"m=max(s,m);"
"float i=e(v,9.);"
"i=max(i,abs(abs(v.g)-3.)-.5);"
"i=max(i,-d(p(vec2(a*4.,v.g*.2),vec2(.4)),vec2(.08)));"
"if(g)"
"i-=.1*d(floor(v*10.));"
"i=min(i,f(n(v,vec3(11.8)),vec3(.1,100.,.1)));"
"i=max(i,-e(v,8.9));"
"float l=c(vec3(r-13.,v.g,a*10.));"
"l=min(l,max(15.-r,min(c(v.bgr),c(v))));"
"l=max(l,s);"
"PICK(m,i,3);"
"PICK(m,l,4);"
"if(T>44.)"
"{"
"if(t<8.)"
"{"
"float L=mix(.001,4.,smoothstep(44.,54.,T));"
"PICK(m,K(v/L)*L,5);"
"}"
"else"
" m=min(m,t+2.);"
"}"
"return m;"
"}"
"vec3 L(vec3 m)"
"{"
"float r=w(m);"
"return normalize(vec3(w(m+v.grr)-r,w(m+v.rgr)-r,w(m+v.rrg)-r));"
"}"
"void K(vec3 v,out vec3 m,out vec3 r,out vec3 f,out float i,out float b)"
"{"
"g=true;"
"O_=true;"
"m=L(v);"
"r=vec3(0.,1.,1.);"
"f=vec3(0.);"
"i=0.;"
"b=0.;"
"if(A_==1)"
"r=vec3(0.),f=vec3(1.),i=.5,b=.99;"
"else"
" if(A_==2)"
"{"
"float t=sin(T+dot(normalize(vec3(1.)),floor(v/2.)));"
"f=max(0.,t)*vec3(1.);"
"r=vec3(0.);"
"i=.2;"
"b=.99;"
"}"
"else"
" if(A_==3)"
"r=vec3(0.),f=vec3(1.),i=.8,b=.99;"
"else"
" if(A_==4)"
"r=vec3(0.),f=vec3(.56,.57,.58),b=.8,i=.2+.6*pow(d(v*4.+40.),4.);"
"else"
" if(A_==5)"
"r=vec3(0.),f=vec3(1.),i=.9,b=0.;"
"else"
"{"
"for(int P=0;P<LN;++P)"
"if(A_==100+P)"
"r=l[P],f=vec3(0.),i=0.,b=0.;"
"}"
"O_=false;"
"g=false;"
"}"
"float K(float v,float f)"
"{"
"f*=f;"
"f*=f;"
"float r=v*v*(f-1.)+1.;"
"r=m*r*r;"
"return f/r;"
"}"
"float L(float v,float m)"
"{"
"return m+=1.,m*=m/8.,v/(v*(1.-m)+m);"
"}"
"vec3 K(vec3 v,vec3 m,float r,float b)"
"{"
"float f=0.,i=1000.;"
"int a;"
"for(a=0;a<128;++a)"
"{"
"vec3 g=v+m*f;"
"float s=w(g);"
"f+=s*r;"
"i=min(i,s);"
"if(s<.002*f||f>b)"
"break;"
"}"
"return vec3(f,i,float(a));"
"}"
"vec3 K(vec3 v,vec3 f,vec3 r,float i,vec3 t,float b,float g)"
"{"
"vec3 a=vec3(0.);"
"for(int s=0;s<LN;++s)"
"{"
"vec3 d=P[s]-v;"
"float e=dot(d,d),o=sqrt(e);"
"d=normalize(d);"
"vec3 x=K(v+.02*d,d,1.,o);"
"if(x.g<.005||x.r<o)"
"continue;"
"vec3 n=normalize(f+d),c=mix(vec3(.04),t,b);"
"float p=max(dot(n,f),0.),w=max(dot(r,f),0.),h=max(dot(r,d),0.),u=max(dot(r,n),0.);"
"vec3 C=c+(1.-c)*pow(1.-p,5.);"
"float I=L(w,g)*L(h,g);"
"vec3 z=K(u,g)*I*C/(4.*w*h+.001);"
"a+=((vec3(1.)-C)*(1.-b)*t/m+z)*h*l[s]/e;"
"}"
"vec3 d=vec3(.03)*t*i;"
"return d+a;"
"}"
"mat3 K(vec3 v,vec3 m,vec3 f)"
"{"
"vec3 r=normalize(v-m),b=normalize(cross(f,r));"
"f=cross(r,b);"
"return mat3(b,f,r);"
"}"
"void main()"
"{"
"vec2 m=gl_FragCoord.rg/V*2.-1.;"
"m.r*=V.r/V.g;"
"K();"
"vec3 f=normalize(vec3(m,-1.44)),r,i=vec3(0.);"
"if(T<34.)"
"r=vec3(mix(40.,11.,T/34.),2.,0.);"
"else"
" if(T<44.)"
"{"
"float a=T-44.;"
"r=vec3(cos(a*.1)*13.,2.,sin(a*.1)*14.);"
"i=vec3(20.,0.,20.);"
"}"
"else"
" if(T<62.)"
"r=vec3(cos(T*.1)*13.,2.,sin(T*.1)*14.);"
"else"
"{"
"float a=T*2./10.48,g=floor(a);"
"r=13.*mix(vec3(t(g),t(g+4.),t(g+5.)),vec3(t(g+17.),t(g+41.),t(g+35.)),a-g);"
"}"
"float g=T*3.;"
"r+=.1*vec3(t(g),t(g+1.),t(g+3.));"
"mat3 a=K(r,i,v.rbr);"
"r+=a*vec3(m*.01,0.);"
"f=a*f;"
"vec3 d=vec3(0.);"
"const float s=40.;"
"vec3 x=K(r,f,1.,s);"
"if(x.r<s)"
"{"
"vec3 l=r+x.r*f,o,c,e;"
"float n,w;"
"K(l,e,c,o,w,n);"
"b=false;"
"d=c+K(l,-f,e,0.,o,n,w);"
"}"
"gl_FragColor=vec4(d,x.r);"
"}";

#endif // SHADER_CODE_H_
