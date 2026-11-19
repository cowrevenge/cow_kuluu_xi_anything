/* f_0x10093720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10093720(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100939ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100939ec;
    case 0x100939feu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100939fe;
    default: break;
    }
#endif

    COW_AT(10093720)
    edi = COW_IMG(0x10480af0u);
    eax = 0u;
    ecx = 0x901u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x10485630u), 0u);
    edi = COW_IMG(0x10485a30u);
    eax = 0xffffffffu;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x1047fb3cu), 0x258u);
    edi = COW_IMG(0x104809a0u);
    eax = 0u;
    ecx = 0x3cu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x1048559cu), 1u);
    wr32(COW_IMG(0x104859e4u), 1u);
    wr8(COW_IMG(0x10482f43u), 0u);
    wr32(COW_IMG(0x1047d3f0u), 0u);
    wr16(COW_IMG(0x10485f7au), 0u);
    wr8(COW_IMG(0x10482f44u), 0u);
    wr8(COW_IMG(0x1048098du), 0u);
    wr8(COW_IMG(0x10487e48u), 0u);
    wr8(COW_IMG(0x104804c2u), 0u);
    wr8(COW_IMG(0x104808f0u), 0u);
    wr8(COW_IMG(0x10487034u), 0u);
    wr8(COW_IMG(0x10482f18u), 0u);
    wr8(COW_IMG(0x10487e49u), 0u);
    wr8(COW_IMG(0x10485a70u), 0u);
    wr16(COW_IMG(0x104804ccu), 0u);
    wr16(COW_IMG(0x104808fcu), 0u);
    wr32(COW_IMG(0x10480ae8u), 0u);
    wr8(COW_IMG(0x104808fau), 0u);
    wr8(COW_IMG(0x10480aedu), 0u);
    wr16(COW_IMG(0x1047fb40u), 0u);
    wr16(COW_IMG(0x104804c4u), 0u);
    wr8(COW_IMG(0x10482ef4u), 0u);
    wr8(COW_IMG(0x104807f3u), 0u);
    wr8(COW_IMG(0x10482f1eu), 0u);
    wr8(COW_IMG(0x104855a0u), 0u);
    wr8(COW_IMG(0x104808f9u), 0u);
    wr8(COW_IMG(0x1048315du), 0u);
    wr8(COW_IMG(0x10487e4au), 0u);
    wr8(COW_IMG(0x104804c1u), 0u);
    wr8(COW_IMG(0x1048098eu), 0u);
    wr8(COW_IMG(0x104807f2u), 0u);
    wr32(COW_IMG(0x10485a08u), 0u);
    wr32(COW_IMG(0x10485a0cu), 0u);
    wr32(COW_IMG(0x10485a10u), 0u);
    wr32(COW_IMG(0x10485a18u), 0u);
    wr32(COW_IMG(0x10485a1cu), 0u);
    wr32(COW_IMG(0x10485a20u), 0u);
    wr32(COW_IMG(0x104859e8u), 0u);
    wr32(COW_IMG(0x104859ecu), 0u);
    wr32(COW_IMG(0x104859f0u), 0u);
    wr32(COW_IMG(0x104859f8u), 0u);
    wr32(COW_IMG(0x104859fcu), 0u);
    wr32(COW_IMG(0x10485a00u), 0u);
    wr8(COW_IMG(0x104807f4u), 0xffu);
    wr16(COW_IMG(0x10482f1cu), 0xffffu);
    wr8(COW_IMG(0x10482f1fu), 8u);
    wr32(COW_IMG(0x10487ea4u), 0u);
    wr8(COW_IMG(0x104804c3u), 0u);
    wr8(COW_IMG(0x10487fc9u), 0u);
    wr8(COW_IMG(0x1047faaeu), 0u);
    edi = COW_IMG(0x10485638u);
    eax = 0u;
    ecx = 0xebu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x1047fb38u), 0u);
    wr8(COW_IMG(0x104808fbu), 0u);
    wr8(COW_IMG(0x1048315cu), 0u);
    wr32(COW_IMG(0x10487eb4u), 0u);
    wr32(COW_IMG(0x10487eccu), 0u);
    wr32(COW_IMG(0x10487ec8u), 0u);
    wr32(COW_IMG(0x10487eb8u), 0u);
    wr32(COW_IMG(0x10487e94u), 0u);
    wr32(COW_IMG(0x10487e9cu), 0u);
    wr32(COW_IMG(0x1048558cu), 0x7f007fu);
    wr32(COW_IMG(0x10485fe4u), 0u);
    wr32(COW_IMG(0x10485590u), 0x7f007fu);
    wr32(COW_IMG(0x10485fe8u), 0u);
    wr32(COW_IMG(0x10485594u), 0x7f007fu);
    wr32(COW_IMG(0x10485fecu), 0u);
    wr32(COW_IMG(0x10485164u), 0u);
    wr32(COW_IMG(0x10485598u), 0x7f007fu);
    wr32(COW_IMG(0x10485ff0u), 0u);
    wr32(COW_IMG(0x10485168u), 0u);
    wr32(COW_IMG(0x1048516cu), 0u);
    wr32(COW_IMG(0x10487ea0u), 0u);
    edi = COW_IMG(0x10482ef8u);
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x10487e90u), 0u);
    wr32(COW_IMG(0x10487ef0u), 0u);
    wr8(COW_IMG(0x10487ef4u), 0u);
    wr32(COW_IMG(0x10485ff8u), 0u);
    wr32(COW_IMG(0x10485ffcu), 0u);
    wr8(COW_IMG(0x10486000u), 0u);
    wr32(COW_IMG(0x10486004u), 0u);
    wr32(COW_IMG(0x10486008u), 0u);
    wr8(COW_IMG(0x1048600cu), 0u);
    wr8(COW_IMG(0x10486014u), 0u);
    wr32(COW_IMG(0x10485170u), 0u);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x100c3190u), eax, ecx, 0u, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100c3200u), t1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x1015d860u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x10093a30u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    g->edx = t11;
    t12 = cow_stdcall(g, COW_IMG(0x10093a90u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->ecx = t13;
    g->edx = t14;
    t15 = cow_stdcall(g, COW_IMG(0x10093ad0u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    t18 = cow_stdcall(g, COW_IMG(0x10093af0u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    t21 = cow_stdcall(g, COW_IMG(0x10093b10u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_stdcall(g, COW_IMG(0x10093b30u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    g->ecx = t25;
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x10093b50u), 0);
    t28 = g->ecx;
    t29 = g->edx;
    wr16(COW_IMG(0x10482f24u), 0u);
    wr16(COW_IMG(0x10485fe0u), 0u);
    wr32(COW_IMG(0x104855a4u), 0u);
    wr8(COW_IMG(0x104808feu), 0u);
    wr8(COW_IMG(0x104807f5u), 0u);
    wr8(COW_IMG(0x1048098cu), 0u);
    g->ecx = t28;
    g->edx = t29;
    cow_stdcall(g, COW_IMG(0x100a3cd0u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr8(COW_IMG(0x1047d6a0u), 0u);
    wr8(COW_IMG(0x104807f6u), 0u);
    wr8(COW_IMG(0x104804ceu), 0u);
    eax = 0u;
    ecx = t30;
    edx = t31;
L_100939ec: ;
    COW_AT(100939ec)
    wr8(COW_IMG(0x10483160u) + eax, 0u);
    wr8(COW_IMG(0x10483162u) + eax, 0u);
    if ((int32_t)(eax + 1u) < 2)
    {
        eax = eax + 1u;
        goto L_100939ec;
    }
    eax = eax + 1u;
    COW_AT(100939fe)
    wr8(COW_IMG(0x10487ef5u), 0u);
    wr32(COW_IMG(0x1035af3cu), 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t32 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, 0x25u);
    t33 = g->edx;
    t34 = cow_thiscall(g, COW_IMG(0x101c80c0u), COW_IMG(0x10489948u), 1, t32);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return (t34 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10093720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100939ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100939feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10093720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10093720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
