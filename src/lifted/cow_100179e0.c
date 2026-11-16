/* f_0x100179e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100179e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 316u);

    wr32(sp0 - 0x11cu, in_ebx);
    if ((int32_t)rd32(self + 0x14u) <= 0)
    {
        eax = rd32(self + 0x14u);
        goto L_10017ae8;
    }
    eax = rd32(self + 0x14u);
    loc_118 = (rd32(sp0 - 0x118u) & 0xffffffu) | 0x1000000u;
    if ((int32_t)eax > 2) goto L_10017ae8;
    if (rd32(COW_IMG(0x103507dcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x103507dcu));
        goto L_10017ae8;
    }
    wr32(sp0 - 0x120u, in_ebp);
    wr32(sp0 - 0x124u, in_esi);
    wr32(sp0 - 0x128u, in_edi);
    edx = in_edx;
    ebp = COW_IMG(0x103507dcu);
L_10017a18: ;
    t1 = rd32(ebp + 4u);
    wr32(sp0 - 0x12cu, t1);
    wr32(sp0 - 0x130u, COW_IMG(0x10350958u));
    wr32(sp0 - 0x134u, 5u);
    wr32(sp0 - 0x138u, sp0 - 0x114u);
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x114u, 5u, COW_IMG(0x10350958u), t1, in_edi, in_esi);
    t2 = g->edx;
    if (rd32(ebp - 4u) == 0u) goto L_10017a91;
    eax = rd32(ebp - 4u);
    edx = t2;
    if (eax != 1u) goto L_10017acb;
    wr32(sp0 - 0x12cu, sp0 - 0x10cu);
    wr32(sp0 - 0x130u, sp0 - 0x114u);
    wr32(sp0 - 0x134u, sp0 - 0x104u);
    wr32(sp0 - 0x10cu, 0x104u);
    g->edx = sp0 - 0x10cu;
    g->esp = sp0 - 0x128u;
    t3 = cow_thiscall(g, COW_IMG(0x10018fc0u), self + 0xcu, 3, sp0 - 0x104u, sp0 - 0x114u, sp0 - 0x10cu);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        edx = t4;
        goto L_10017a7f;
    }
    t5 = rd32(ebp);
    esi = sp0 - 0x104u;
    edi = t5;
    ecx = 0x41u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = 0x104u;
L_10017acb: ;
    if (rd32(ebp + 0xcu) != 0u)
    {
        ebp = ebp + 0xcu;
        goto L_10017a18;
    }
    eax = rd32(ebp + 0xcu);
    g->ebx = rd32(sp0 - 0x11cu);
    g->esi = rd32(sp0 - 0x124u);
    g->edi = rd32(sp0 - 0x128u);
    g->ebp = rd32(sp0 - 0x120u);
    return (eax & 0xffffff00u) | loc_118 >> 0x18u;
L_10017a7f: ;
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    wr32(sp0 - 0x130u, rd32(ebp));
    g->esp = sp0 - 0x128u;
    t6 = cow_fastcall(g, COW_IMG(0x10019030u), self + 0xcu, edx, 2, rd32(ebp), sp0 - 0x114u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10017ac3: ;
    if ((uint8_t)eax == 0u)
    {
        loc_118 = (rd32(sp0 - 0x118u) & 0xffffffu) | (uint8_t)eax << 0x18u;
    }
    goto L_10017acb;
L_10017a91: ;
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    wr32(sp0 - 0x130u, sp0 - 0x108u);
    g->esp = sp0 - 0x128u;
    t8 = cow_thiscall(g, COW_IMG(0x10018f80u), self + 0xcu, 2, sp0 - 0x108u, sp0 - 0x114u);
    if ((uint8_t)t8 != 1u)
    {
        ecx = rd32(ebp);
        goto L_10017ab4;
    }
    ecx = rd32(ebp);
    t9 = rd32(sp0 - 0x108u);
    wr32(ecx, t9);
    edx = t9;
    goto L_10017acb;
L_10017ab4: ;
    wr32(sp0 - 0x12cu, sp0 - 0x114u);
    wr32(sp0 - 0x130u, rd32(ecx));
    g->edx = rd32(ecx);
    t10 = rd32(ecx);
    g->esp = sp0 - 0x128u;
    t11 = cow_thiscall(g, COW_IMG(0x10019000u), self + 0xcu, 2, t10, sp0 - 0x114u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_10017ac3;
L_10017ae8: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100179e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100179e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
