/* f_0x10114d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10114d00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    ecx = 0u;
    ebx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u);
    ebp = rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u);
    esi = 0u;
    edi = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_10114d18: ;
    if ((int32_t)(ecx + 1u) < 32)
    {
        esi = esi | (-((ebx & 1u << (ecx & 0x1fu)) != 0u) & 1u << (ecx & 0x1fu));
        edi = edi | (-((ebp & 1u << (ecx & 0x1fu)) != 0u) & 1u << (ecx & 0x1fu));
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_10114d18;
    }
    edx = 1u << (ecx & 0x1fu);
    esi = esi | (-((ebx & 1u << (ecx & 0x1fu)) != 0u) & 1u << (ecx & 0x1fu));
    edi = edi | (-((ebp & 1u << (ecx & 0x1fu)) != 0u) & 1u << (ecx & 0x1fu));
    ecx = ecx + 1u;
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c128u));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c128u), edi, esi, in_edi);
    t1 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10114d6a;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_10114d6e;
    if (ecx == 3u) goto L_10114d6e;
L_10114d6a: ;
    if (ecx == 0u) goto L_10114d75;
L_10114d6e: ;
    eax = COW_IMG(0x1036c124u);
L_10114d7a: ;
    wr32(sp0 - 0x34u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_thiscall(g, COW_IMG(0x101092c0u), arg4, 1, eax);
    t3 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x101093b0u), arg4, 1, sp0 - 0x20u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101c46b0u), rd32(COW_IMG(0x10662dccu)), 0);
    t6 = g->edx;
    wr32(sp0 - 0x34u, t5);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101093b0u), arg4, 1, t5);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = t8;
    return t7;
L_10114d75: ;
    eax = COW_IMG(0x1036c120u);
    goto L_10114d7a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
