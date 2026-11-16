/* f_0x1015ea30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015ea30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1057845cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1057845cu));
        goto L_1015ea6f;
    }
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x54cu);
    t2 = g->edx;
    if (t1 == 0u) goto L_1015ea63;
    edx = t2;
    esi = t1;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1014dd30u), esi, 0);
    wr32(esi, COW_IMG(0x10335280u));
    wr32(COW_IMG(0x1057845cu), esi);
    return esi;
L_1015ea63: ;
    wr32(COW_IMG(0x1057845cu), 0u);
    eax = 0u;
L_1015ea6f: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ea30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ea30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
