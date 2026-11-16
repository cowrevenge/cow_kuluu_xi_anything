/* f_0x100e4920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100e4920(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        pf = PARITY((uint8_t)rd32(COW_IMG(0x104dfd98u)));
        zf = rd32(COW_IMG(0x104dfd98u)) == 0u;
        sf = (int32_t)rd32(COW_IMG(0x104dfd98u)) < 0;
        t1 = 1u << (arg1 & 0x1fu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_cdecl(g, COW_IMG(0x100e4630u), 2, 2u, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
