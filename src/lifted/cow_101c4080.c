/* f_0x101c4080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c4080(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 868u);

    wr32(sp0 - 0x344u, in_ebx);
    wr32(sp0 - 0x348u, in_ebp);
    wr32(sp0 - 0x34cu, in_esi);
    wr32(sp0 - 0x350u, in_edi);
    wr32(sp0 - 0x354u, arg1);
    wr32(sp0 - 0x358u, COW_IMG(0x1037cbb4u));
    wr32(sp0 - 0x35cu, sp0 - 0x100u);
    g->esp = sp0 - 0x348u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbb4u), arg1, in_edi, in_esi);
    wr32(sp0 - 0x354u, sp0 - 0x340u);
    wr32(sp0 - 0x358u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x350u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x10329128u)), sp0 - 0x340u, 2, sp0 - 0x100u, sp0 - 0x340u);
    t3 = g->edx;
    if (t2 != 0xffffffffu)
    {
        edx = t3;
        ebx = t2;
        goto L_101c40d0;
    }
    eax = t2;
    return eax;
L_101c40d0: ;
    esi = sp0 - 0x314u;
    edi = COW_IMG(0x10354054u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_101c4125;
    esi = sp0 - 0x314u;
    edi = COW_IMG(0x1037cbc4u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        goto L_101c4125;
    }
    wr32(sp0 - 0x354u, sp0 - 0x314u);
    wr32(sp0 - 0x358u, arg1);
    wr32(sp0 - 0x35cu, COW_IMG(0x10350670u));
    wr32(sp0 - 0x360u, sp0 - 0x200u);
    g->ebx = ebx;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x34cu;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10350670u), arg1, sp0 - 0x314u, in_edi);
    t5 = g->ecx;
    wr32(sp0 - 0x354u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x350u;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x10329124u)), t5, 1, sp0 - 0x200u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_101c4158;
    }
    ecx = t7;
    edx = t8;
L_101c4125: ;
    wr32(sp0 - 0x354u, sp0 - 0x340u);
    wr32(sp0 - 0x358u, ebx);
    g->eax = sp0 - 0x340u;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t10 = cow_thiscall(g, rd32(COW_IMG(0x10329120u)), ecx, 2, ebx, sp0 - 0x340u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        edx = t12;
        goto L_101c40d0;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x354u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t13 = cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, ebx);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x354u, arg1);
    t16 = cow_thiscall(g, rd32(COW_IMG(0x1032920cu)), t14, 1, arg1);
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return (-(t16 != 0u) & 2u) - 1u;
L_101c4158: ;
    wr32(sp0 - 0x354u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x350u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, ebx);
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c4080(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
