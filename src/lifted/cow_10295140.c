/* f_0x10295140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10295140(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    t2 = rd32(rd32(sp0 + 4u) + 0x28u);
    t3 = rd32(rd32(sp0 + 4u) + 0x2cu);
    wr32(sp0 + 4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10295670u), 1, t1);
    t5 = g->edx;
    edi = rd32(t1 + 0x30u);
    eax = 0u;
    ecx = t4;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)t4 <= 0)
    {
        edx = t5;
        esi = t4;
        loc_4 = t4;
        goto L_1029530f;
    }
    edx = t5;
    ebx = t1;
    ebp = t3;
    loc_4 = t4;
    if (rd32(sp0 + 4u) == 0u) goto L_102952e6;
    esi = rd32(sp0 + 4u);
    if (ebp == 0u) goto L_102952bd;
    if ((int32_t)rd32(ebp + 0x1cu) <= 0)
    {
        eax = rd32(ebp + 0x1cu);
        goto L_102952bd;
    }
    eax = rd32(ebp + 0x1cu);
    if (eax != rd32(esi + 0x1cu)) goto L_1029528c;
    if ((int32_t)eax <= 0) goto L_102951b6;
    ecx = rd32(ebp + 0x20u);
    esi = 0u;
L_102951a4: ;
    if (rd32(rd32(ecx)) != 0x50004u)
    {
        edx = rd32(ecx);
        goto L_1029520e;
    }
    edx = rd32(ecx);
    if ((int32_t)(esi + 1u) < (int32_t)eax)
    {
        ecx = ecx + 4u;
        esi = esi + 1u;
        goto L_102951a4;
    }
    ecx = ecx + 4u;
L_102951b6: ;
    if (rd32(rd32(sp0 + 4u)) == 0x50001u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10295261;
    }
    eax = rd32(rd32(sp0 + 4u));
    edi = rd32(sp0 + 4u);
    if (eax == 0x50003u) goto L_10295261;
    if (rd32(rd32(rd32(rd32(ebp + 0x20u)) + 0x28u)) == 0x50001u)
    {
        eax = rd32(rd32(rd32(ebp + 0x20u)) + 0x28u);
        ecx = rd32(rd32(rd32(rd32(ebp + 0x20u)) + 0x28u));
        goto L_102951ec;
    }
    eax = rd32(rd32(rd32(ebp + 0x20u)) + 0x28u);
    ecx = rd32(rd32(rd32(rd32(ebp + 0x20u)) + 0x28u));
    if (ecx != 0x50003u) goto L_10295238;
L_102951ec: ;
    t12 = rd32(eax + 0x24u);
    t13 = rd32(sp0 + 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1027d100u), 2, t13, t12);
    t14 = g->ecx;
    d15 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d15);
    t16 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x10284f70u), g->eax, g->ecx, t16, 1, 3, edi, t16, t13);
    eax = t17;
    esi = t13;
L_1029526f: ;
    t20 = rd32(ebx + 0x30u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10295340u), eax, g->ecx, g->edx, 1, 5, ebp, loc_4, eax, esi, t20);
    return rd32(ebx + 0x30u);
L_1029520e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb814u), esi);
    return 0u;
L_10295238: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t10 = g->ecx;
    t11 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb7f8u), COW_IMG(0x103b379cu));
    return 0u;
L_10295261: ;
    t18 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x10296040u), ecx, 2, edi, t18);
    eax = t19;
    esi = t18;
    goto L_1029526f;
L_1029528c: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t21 = g->edx;
    t22 = rd32(esi + 0x1cu);
    t23 = rd32(ebp + 0x1cu);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb788u), t23);
    return 0u;
L_102952bd: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t25 = g->ecx;
    t26 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb774u), COW_IMG(0x103b379cu));
    return 0u;
L_102952e6: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t28 = g->ecx;
    t29 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb75cu), COW_IMG(0x103b379cu));
    return 0u;
L_1029530f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t31 = g->ecx;
    t32 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb73cu), esi);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10295140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10295140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
