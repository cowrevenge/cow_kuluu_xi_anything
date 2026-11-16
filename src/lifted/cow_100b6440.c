/* f_0x100b6440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6440(Guest* g)
{
    double d11;
    double d14;
    double d17;
    double d19;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const double xin0 = ST(0);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x18u, in_esi);
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x120u) >> 9u & 1u)) goto L_100b6664;
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 3u) goto L_100b6664;
    eax = t1;
    ecx = rd32(self + 0x20u);
    edx = t1;
    t2 = rd32(COW_IMG(0x100b6674u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100b648au: goto L_100b648a;
    case 0x100b651au: goto L_100b651a;
    case 0x100b6541u: goto L_100b6541;
    case 0x100b656cu: goto L_100b656c;
    default: rt_fatal(g, COW_IMG(0x100b6483u), "switch");
    }
    return;
L_100b648a: ;
    t35 = (eax & 0xffffff00u) | rd8(COW_IMG(0x1035cfa0u));
    wr32(sp0 - 0x1cu, t35);
    g->eax = t35;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t36 = cow_cdecl(g, COW_IMG(0x100ae9b0u), 1, t35);
    t37 = g->ecx;
    t38 = g->edx;
    g->ecx = t37;
    g->edx = t38;
    t39 = cow_stdcall(g, COW_IMG(0x1003d5c0u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    cow_stdcall(g, COW_IMG(0x10084210u), 0);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1035cff4u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x1035cff8u)));
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1035cff0u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x1035cffcu)));
    t42 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 4u;
    wr32(sp0 - 0x1cu, t42);
    g->eax = t42;
    g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    t43 = rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x1cu;
    t44 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t45 = g->edx;
    fpush(g, xin0);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1001e780u), t44, 1, rd32(sp0 - 0x1cu));
    t46 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u);
    wr32(sp0 - 0x1cu, t46);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    t47 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    g->esp = sp0 - 0x20u;
    t48 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t49 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10021680u), t48, 2, sp0 - 0x10u, rd32(sp0 - 0x1cu));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    g->top = (g->top + 1u) & 7u;
    return;
L_100b651a: ;
    wr32(sp0 - 0x1cu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t30 = cow_cdecl(g, COW_IMG(0x100ae9b0u), 1, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_stdcall(g, COW_IMG(0x100842d0u), 0);
    t34 = g->edx;
    cow_thiscall(g, COW_IMG(0x10221c30u), rd32(COW_IMG(0x106671b8u)), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100b6541: ;
    t29 = rd8(COW_IMG(0x10351220u)) == 1u;
    wr32(sp0 - 0x1cu, t29);
    wr32(sp0 - 0x20u, 2u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t29);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100b656c: ;
    wr32(sp0 - 0x1cu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x100ae9b0u), 1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x1003d5c0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x10084210u), 0);
    t10 = g->edx;
    d11 = cow_take_float(g);
    if (rd8(COW_IMG(0x104897eau)) & 1u)
    {
        x0 = d11;
    }
    else
    {
        eax = (t9 & 0xffffff00u) | rd8(COW_IMG(0x104897eau));
        edx = t10;
        x0 = d11;
        wr32(sp0 - 0x1cu, 2u);
        wr8(COW_IMG(0x104897eau), (uint8_t)(eax | 1u));
        g->eax = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t13 = g->edx;
        wr32(sp0 - 0x14u, t12);
        wr32(sp0 - 0x1cu, 4u);
        d14 = fr(g, (double)(int32_t)t12 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489920u), (float)d14);
        g->edx = t13;
        t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t16 = g->edx;
        wr32(sp0 - 0x14u, t15);
        wr32(sp0 - 0x1cu, 6u);
        d17 = fr(g, (double)(int32_t)t15 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489924u), (float)d17);
        t18 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        wr32(sp0 - 0x14u, t18);
        wr32(COW_IMG(0x1048992cu), 0x3f800000u);
        d19 = fr(g, (double)(int32_t)t18 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489928u), (float)d19);
    }
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x10489924u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x10489928u)));
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10489920u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x1048992cu)));
    t20 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 4u;
    wr32(sp0 - 0x1cu, t20);
    g->eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    g->edx = rd32(COW_IMG(0x1048992cu));
    t21 = rd16(COW_IMG(0x10485f7au));
    t22 = rd32(COW_IMG(0x1048992cu));
    g->esp = sp0 - 0x1cu;
    t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t24 = g->edx;
    fpush(g, x0);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1001e780u), t23, 1, rd32(sp0 - 0x1cu));
    t25 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u);
    wr32(sp0 - 0x1cu, t25);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = t25;
    g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    t26 = rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x20u;
    t27 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t28 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10021680u), t27, 2, sp0 - 0x10u, rd32(sp0 - 0x1cu));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
L_100b6664: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
