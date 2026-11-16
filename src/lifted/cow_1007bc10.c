/* f_0x1007bc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007bc10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_210;
    uint32_t loc_214;
    uint32_t loc_218;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 544u);

    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, 1u);
    wr32(sp0 - 0x210u, 0u);
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x214u, t1);
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x208u;
    t3 = cow_call_regs(g, COW_IMG(0x1022b430u), t2, t1, in_edx, 1, 3, t1, 0u, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t5;
        goto L_1007bc80;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x20cu, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x208u;
    t6 = cow_cdecl(g, COW_IMG(0x1022b2f0u), 1, eax);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 < 0)
    {
        edx = t8;
        esi = 0u;
        goto L_1007bc8a;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    wr32(sp0 - 0x20cu, eax);
    g->esp = sp0 - 0x200u;
    t9 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, eax, rd32(sp0 - 0x208u), rd32(sp0 - 0x204u));
    wr32(sp0 - 0x210u, t9);
    t10 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x214u, t10);
    wr32(sp0 - 0x218u, COW_IMG(0x10357f90u));
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->esp = sp0 - 0x208u;
    t11 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10357f90u), t10, t9, rd32(sp0 - 0x20cu));
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t12 = g->edx;
    g->esi = rd32(sp0 - 0x208u);
    g->edx = t12;
    return arg3;
L_1007bc80: ;
    if (eax != 0xfffffffeu)
    {
        esi = 0u;
    }
    else
    {
        esi = 1u;
    }
L_1007bc8a: ;
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, 1u);
    wr32(sp0 - 0x218u, 0u);
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x21cu, t13);
    t14 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x1ecu;
    t15 = cow_call_regs(g, COW_IMG(0x10222e20u), g->eax, t13, edx, 1, 12, t13, 0u, 1u, 0u, 0u, in_esi, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u));
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)t15 < 0)
    {
        eax = t15;
        edx = t17;
        goto L_1007bd1d;
    }
    eax = t15;
    ecx = t16;
    wr32(sp0 - 0x20cu, sp0 - 0x204u);
    wr32(sp0 - 0x210u, eax);
    g->edx = sp0 - 0x204u;
    g->esp = sp0 - 0x208u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10222c90u), ecx, 2, eax, sp0 - 0x204u);
    t19 = g->edx;
    if ((int32_t)t18 < 0)
    {
        edx = t19;
        goto L_1007bd23;
    }
    eax = t18;
    edx = t19;
    if ((int32_t)rd32(sp0 - 0x204u) < 0)
    {
        ecx = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x20cu, eax);
        g->esp = sp0 - 0x200u;
        t22 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, eax, rd32(sp0 - 0x208u), rd32(sp0 - 0x204u));
        wr32(sp0 - 0x210u, t22);
        t23 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x214u, t23);
        wr32(sp0 - 0x218u, COW_IMG(0x10357f90u));
        ecx = t23;
        loc_210 = t22;
        loc_214 = t23;
        loc_218 = COW_IMG(0x10357f90u);
    }
    else
    {
        ecx = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x20cu, ecx);
        wr32(sp0 - 0x210u, eax);
        g->esp = sp0 - 0x204u;
        t20 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, eax, ecx, rd32(sp0 - 0x208u));
        wr32(sp0 - 0x210u, t20);
        t21 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x214u, t21);
        wr32(sp0 - 0x218u, COW_IMG(0x10357f98u));
        ecx = t21;
        loc_210 = t20;
        loc_214 = t21;
        loc_218 = COW_IMG(0x10357f98u);
    }
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x208u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, loc_218, loc_214, loc_210, rd32(sp0 - 0x20cu));
    t24 = g->edx;
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    g->edx = t24;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t25 = g->edx;
    g->esi = rd32(sp0 - 0x208u);
    g->edx = t25;
    return arg3;
L_1007bd1d: ;
    if (eax == 0xfffffffeu)
    {
        esi = esi + 1u;
    }
L_1007bd23: ;
    if (esi == 0u) goto L_1007bd62;
    t26 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x20cu, t26);
    wr32(sp0 - 0x210u, COW_IMG(0x10357fa8u));
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->edx = t26;
    g->esp = sp0 - 0x200u;
    t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10357fa8u), t26, rd32(sp0 - 0x208u), rd32(sp0 - 0x204u));
    t28 = g->edx;
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    g->edx = t28;
    g->esp = sp0 - 0x208u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t29 = g->edx;
    g->esi = rd32(sp0 - 0x208u);
    g->edx = t29;
    return arg3;
L_1007bd62: ;
    g->esi = rd32(sp0 - 0x208u);
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bc10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
