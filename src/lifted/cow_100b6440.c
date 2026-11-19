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
    double d13;
    double d16;
    double d18;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t19;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b6466u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b6466;
    case 0x100b6483u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b6483;
    case 0x100b648au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b648a;
    case 0x100b651au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b651a;
    case 0x100b6541u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b6541;
    case 0x100b656cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100b656c;
    case 0x100b6589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100b6589;
    case 0x100b65f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100b65f1;
    case 0x100b6664u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_100b6664;
    default: break;
    }
#endif

    COW_AT(100b6440)
    wr32(sp0 - 0x18u, in_esi);
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x120u) >> 9u & 1u))
    {
        loc_18 = in_esi;
        goto L_100b6664;
    }
    COW_AT(100b6466)
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 3u)
    {
        loc_18 = in_esi;
        goto L_100b6664;
    }
    eax = t1;
    ecx = rd32(self + 0x20u);
    edx = t1;
    COW_AT(100b6483)
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
    COW_AT(100b648a)
    t34 = (eax & 0xffffff00u) | rd8(COW_IMG(0x1035cfa0u));
    wr32(sp0 - 0x1cu, t34);
    g->eax = t34;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t35 = cow_cdecl(g, COW_IMG(0x100ae9b0u), 1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->edx = t37;
    t38 = cow_stdcall(g, COW_IMG(0x1003d5c0u), 0);
    t39 = g->ecx;
    t40 = g->edx;
    cow_stdcall(g, COW_IMG(0x10084210u), 0);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1035cff4u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x1035cff8u)));
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1035cff0u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x1035cffcu)));
    t41 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 4u;
    wr32(sp0 - 0x1cu, t41);
    g->eax = t41;
    g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    t42 = rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x1cu;
    t43 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t44 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1001e780u), t43, 1, rd32(sp0 - 0x1cu));
    t45 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u);
    wr32(sp0 - 0x1cu, t45);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    t46 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    g->esp = sp0 - 0x20u;
    t47 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t48 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10021680u), t47, 2, sp0 - 0x10u, rd32(sp0 - 0x1cu));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    g->esi = in_esi;
    return;
L_100b651a: ;
    COW_AT(100b651a)
    wr32(sp0 - 0x1cu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t29 = cow_cdecl(g, COW_IMG(0x100ae9b0u), 1, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x100842d0u), 0);
    t33 = g->edx;
    cow_thiscall(g, COW_IMG(0x10221c30u), rd32(COW_IMG(0x106671b8u)), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    g->esi = in_esi;
    return;
L_100b6541: ;
    COW_AT(100b6541)
    t28 = rd8(COW_IMG(0x10351220u)) == 1u;
    wr32(sp0 - 0x1cu, t28);
    wr32(sp0 - 0x20u, 2u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t28);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    g->esi = in_esi;
    return;
L_100b656c: ;
    COW_AT(100b656c)
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
    if (!(rd8(COW_IMG(0x104897eau)) & 1u))
    {
        eax = (t9 & 0xffffff00u) | rd8(COW_IMG(0x104897eau));
        edx = t10;
    COW_AT(100b6589)
        wr32(sp0 - 0x1cu, 2u);
        wr8(COW_IMG(0x104897eau), (uint8_t)(eax | 1u));
        g->eax = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t12 = g->edx;
        wr32(sp0 - 0x14u, t11);
        wr32(sp0 - 0x1cu, 4u);
        d13 = fr(g, (double)(int32_t)t11 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489920u), (float)d13);
        g->edx = t12;
        t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t15 = g->edx;
        wr32(sp0 - 0x14u, t14);
        wr32(sp0 - 0x1cu, 6u);
        d16 = fr(g, (double)(int32_t)t14 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489924u), (float)d16);
        t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        wr32(sp0 - 0x14u, t17);
        wr32(COW_IMG(0x1048992cu), 0x3f800000u);
        d18 = fr(g, (double)(int32_t)t17 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(COW_IMG(0x10489928u), (float)d18);
    }
    COW_AT(100b65f1)
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x10489924u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x10489928u)));
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10489920u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x1048992cu)));
    t19 = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 4u;
    wr32(sp0 - 0x1cu, t19);
    g->eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    g->edx = rd32(COW_IMG(0x1048992cu));
    t20 = rd16(COW_IMG(0x10485f7au));
    t21 = rd32(COW_IMG(0x1048992cu));
    g->esp = sp0 - 0x1cu;
    t22 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t23 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1001e780u), t22, 1, rd32(sp0 - 0x1cu));
    t24 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xa0u);
    wr32(sp0 - 0x1cu, t24);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = t24;
    g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    t25 = rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x20u;
    t26 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t27 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10021680u), t26, 2, sp0 - 0x10u, rd32(sp0 - 0x1cu));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    loc_18 = rd32(sp0 - 0x18u);
L_100b6664: ;
    COW_AT(100b6664)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    g->esi = loc_18;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b6440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b6466u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b6483u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b648au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b651au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b6541u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b656cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b6589u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b65f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100b6664u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b6440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
