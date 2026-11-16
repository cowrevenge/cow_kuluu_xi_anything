/* f_0x10127990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10127990(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 2096u);

    wr32(sp0 - 0x808u, in_ebx);
    wr32(sp0 - 0x80cu, in_ebp);
    wr32(sp0 - 0x810u, in_esi);
    wr32(sp0 - 0x814u, in_edi);
    if (rd8(arg2) == 5u) goto L_101279da;
    eax = rd8(arg2) - 5u;
    if (eax == 7u)
    {
        eax = eax - 7u;
        goto L_101279bc;
    }
    eax = eax - 7u;
    if (eax == 1u) goto L_101279da;
    edx = in_edx;
L_101279af: ;
    g->edx = edx;
    return 0u;
L_101279bc: ;
    wr32(sp0 - 0x818u, 0x47u);
    g->edx = in_edx;
    g->esp = sp0 - 0x814u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x47u);
    t2 = g->edx;
    g->edx = t2;
    return -(t1 != 0u) & 0x30703430u;
L_101279da: ;
    wr32(sp0 - 0x818u, 0x800u);
    wr32(sp0 - 0x81cu, arg1);
    wr32(sp0 - 0x820u, sp0 - 0x800u);
    g->eax = sp0 - 0x800u;
    g->esp = sp0 - 0x804u;
    t3 = cow_call_regs(g, COW_IMG(0x10127930u), g->eax, g->ecx, arg1, 1, 7, sp0 - 0x800u, arg1, 0x800u, in_edi, in_esi, in_ebp, in_ebx);
    t4 = g->edx;
    wr32(sp0 - 0x824u, sp0 - 0x800u);
    g->ecx = sp0 - 0x800u;
    g->esp = sp0 - 0x820u;
    cow_call_regs(g, COW_IMG(0x10127970u), t3, g->ecx, g->edx, 1, 1, sp0 - 0x800u);
    t5 = g->ecx;
    wr32(sp0 - 0x828u, 0x3cu);
    wr32(sp0 - 0x82cu, sp0 - 0x800u);
    g->esp = sp0 - 0x824u;
    t6 = cow_call_regs(g, COW_IMG(0x101278b0u), g->eax, t5, sp0 - 0x800u, 1, 2, sp0 - 0x800u, 0x3cu);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        edx = t8;
        goto L_101279af;
    }
    ecx = t7;
    edx = t8;
    ebp = t6;
L_10127a18: ;
    wr32(sp0 - 0x818u, 0x3eu);
    wr32(sp0 - 0x81cu, ebp + 1u);
    wr32(sp0 - 0x804u, ebp + 1u);
    g->esp = sp0 - 0x814u;
    t9 = cow_call_regs(g, COW_IMG(0x101278b0u), g->eax, ecx, edx, 1, 2, ebp + 1u, 0x3eu);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        edx = t11;
        goto L_101279af;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = ebp + 1u;
    if (rd8(eax + 1u) != 0x22u) goto L_10127a3a;
    if (rd8(ebp - 1u) == 0x22u) goto L_10127a74;
L_10127a3a: ;
    if (rd32(COW_IMG(0x1036ebb0u)) == 0u) goto L_10127a74;
    ebx = 0u;
    esi = COW_IMG(0x1036eba0u);
L_10127a4a: ;
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t12 = ~ecx - 1u;
    wr32(sp0 - 0x818u, t12);
    wr32(sp0 - 0x81cu, ebp);
    wr32(sp0 - 0x820u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x80cu;
    t13 = cow_call_regs(g, COW_IMG(0x101278d0u), eax, t12, g->edx, 1, 5, esi, ebp, t12, rd32(sp0 - 0x814u), rd32(sp0 - 0x810u));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        edx = t15;
        goto L_10127a90;
    }
    ecx = t14;
    edx = t15;
    if (rd32(esi + 0x24u) != 0u)
    {
        ebx = ebx + 1u;
        esi = esi + 0x14u;
        goto L_10127a4a;
    }
    esi = rd32(sp0 - 0x804u);
L_10127a74: ;
    wr32(sp0 - 0x818u, 0x3cu);
    wr32(sp0 - 0x81cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x810u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, esi, 0x3cu, rd32(sp0 - 0x814u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 != 0u)
    {
        ecx = t17;
        edx = t18;
        ebp = t16;
        goto L_10127a18;
    }
    eax = t16;
    edx = t18;
    g->ebx = rd32(sp0 - 0x808u);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->ebp = rd32(sp0 - 0x80cu);
    g->edx = edx;
    return eax;
L_10127a90: ;
    g->ebx = rd32(sp0 - 0x808u);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->ebp = rd32(sp0 - 0x80cu);
    g->edx = edx;
    return rd32(COW_IMG(0x1036ebb0u) + ebx * 0x14u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10127990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10127990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
