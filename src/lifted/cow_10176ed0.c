/* f_0x10176ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10176ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(rd32(COW_IMG(0x10631f24u)) + 0x3cu) != 0xedu)
    {
        edx = in_edx;
        ebx = rd32(self + 0x28u);
        ebp = rd32(COW_IMG(0x10631f24u));
        esi = rd32(self + 0x20u);
    }
    else
    {
        ebx = rd32(self + 0x28u);
        ebp = rd32(COW_IMG(0x10631f24u));
        esi = rd32(self + 0x20u);
        if (rd32(COW_IMG(0x10376c78u)) == 0u)
        {
            edx = COW_IMG(0x10376c78u);
            goto L_10176f36;
        }
        eax = rd32(COW_IMG(0x10376c78u));
        edx = COW_IMG(0x10376c78u);
L_10176f1e: ;
        if (esi == eax) goto L_10176f2e;
        if (rd32(edx + 4u) != 0u)
        {
            eax = rd32(edx + 4u);
            edx = edx + 4u;
            goto L_10176f1e;
        }
        edx = edx + 4u;
    }
L_10176f36: ;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    t1 = rd32(self + 0x24u) >> 3u & 0x7ffff0u;
    wr32(sp0 - 0x28u, t1);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, self + 0x30u);
    wr32(sp0 - 0x34u, ebx);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x101792f0u), ebp, 5, ebx, self + 0x30u, esi, t1, sp0 - 0x10u);
    t3 = g->edx;
    wr32(self + 0x30u, t2);
    g->edx = t3;
    return t2;
L_10176f2e: ;
    wr32(sp0 - 0xcu, 0xbf4ccccdu);
    goto L_10176f36;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10176ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10176ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
