/* f_0x100a8d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a8d60(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100a8d99;
    }
    edx = in_edx;
    esi = rd32(self + 0x68u);
L_100a8d69: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100a8d92;
    }
    edx = t3;
    edi = t2;
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x1032b7f8u));
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a8d92;
    }
    eax = t4;
    edx = t5;
    if (rd32(edi + 0xacu) == COW_IMG(0x100a8db0u)) goto L_100a8d9e;
L_100a8d92: ;
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_100a8d69;
    }
L_100a8d99: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a8d9e: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a8d60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
