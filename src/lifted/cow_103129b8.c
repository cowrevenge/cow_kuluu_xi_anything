/* f_0x103129b8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103129b8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x30u;
    t2 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t3 = g->edx;
    wr32(sp0 - 0x34u, 8u);
    wr32(sp0 + 8u, t2);
    wr32(sp0 - 0x34u, 7u);
    edi = sp0 - 0x24u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = t3;
    ebx = in_ebx;
    esi = t1;
L_103129d9: ;
    t4 = rd8(esi);
    wr8(sp0 + (t4 >> 3u) - 0x24u, (uint8_t)(rd8(sp0 + (t4 >> 3u) - 0x24u) | ((t4 & 7u) != 0u ? (uint8_t)(1u << (t4 & 7u)) : 1u)));
    if ((uint8_t)t4 != 0u)
    {
        edx = (edx & 0xffffff00u) | t4;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((t4 & 7u) != 0u ? (uint8_t)(1u << (t4 & 7u)) : 1u);
        esi = esi + 1u;
        goto L_103129d9;
    }
    eax = sp0 + (t4 >> 3u) - 0x24u;
    if (arg1 != 0u)
    {
        edx = arg1;
    }
    else
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(rd32(sp0 + 8u) + 0x18u);
    }
L_10312a01: ;
    wr32(sp0 - 0x34u, 1u);
    if ((rd8(sp0 + (rd8(edx) >> 3u) - 0x24u) & (uint8_t)(1u << (rd8(edx) & 7u))) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_10312a21;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    if ((uint8_t)eax == 0u) goto L_10312a21;
    edx = edx + 1u;
    goto L_10312a01;
L_10312a21: ;
    ebx = edx;
L_10312a23: ;
    if (rd8(edx) == 0u) goto L_10312a47;
    eax = (eax & 0xffffff00u) | rd8(edx);
    wr32(sp0 - 0x34u, 1u);
    if ((rd8(sp0 + ((uint8_t)eax >> 3u) - 0x24u) & (uint8_t)(1u << (eax & 7u))) != 0u) goto L_10312a43;
    eax = 1u << (eax & 7u);
    edx = edx + 1u;
    goto L_10312a23;
L_10312a43: ;
    wr8(edx, 0u);
    edx = edx + 1u;
L_10312a47: ;
    wr32(rd32(sp0 + 8u) + 0x18u, edx);
    return -(ebx != edx) & ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103129b8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103129b8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
