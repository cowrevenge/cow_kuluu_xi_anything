/* f_0x1007b9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b9d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        goto L_1007b9e9;
    }
    edx = t3;
    g->edx = edx;
    return arg3;
L_1007b9e9: ;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007ba0e;
    }
    edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x102230d0u), 1, 0x12u);
    t5 = g->edx;
    if ((int32_t)t4 <= 0)
    {
        edx = t5;
        goto L_1007bac9;
    }
    edx = t5;
    g->edx = edx;
    return arg3;
L_1007ba0e: ;
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 3u) goto L_1007ba3f;
    ecx = ~ecx - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, edx);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u) goto L_1007ba3f;
    eax = t6;
    ecx = t7;
    edx = t8;
    if ((uint8_t)eax >= 0x64u) goto L_1007ba3f;
    t9 = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 1u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10223040u), ecx, 2, t9, 0x12u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_1007ba59: ;
    if ((int32_t)eax < 0) goto L_1007bac5;
    esi = eax;
    t15 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t15;
    g->edx = edx;
    t16 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t16, g->ecx, g->edx, 1, 4, t15, 0u, 0u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        edx = t19;
        goto L_1007bac5;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    edi = t17;
    if ((int32_t)esi >= 1792) goto L_1007bac5;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007ba9d;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102233e0u), eax, g->ecx, g->edx, 1, 1, esi);
    t20 = g->edx;
    g->edx = t20;
    return arg3;
L_1007ba3f: ;
    t12 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x10222e20u), g->eax, rd32(COW_IMG(0x103551e0u)), t12, 1, 5, t12, 1u, 1u, 1u, 0x12u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    goto L_1007ba59;
L_1007ba9d: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102233e0u), eax, g->ecx, g->edx, 1, 1, 0xffffffffu);
    t21 = g->ecx;
    t22 = rd32(edi + 4u);
    g->edx = t22;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, rd32(edi), t22, 9u, esi - 0x200u, 0u);
    t23 = g->edx;
    g->edx = t23;
    return arg3;
L_1007bac5: ;
L_1007bac9: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
