/* f_0x100e40a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e40a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u) != 4u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u);
        goto L_100e40dd;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u);
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    if (t1 - rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19ddcu) <= 2u)
    {
        eax = t1 - rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19ddcu);
        goto L_100e410c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    wr32(ecx + 0x19dd8u, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u, 0u);
    return 1u;
L_100e40dd: ;
    if (eax == 2u)
    {
        g->eax = eax;
        g->esp = sp0;
        t2 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
        if (t2 - rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19de0u) <= 0x1eu)
        {
            eax = t2 - rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19de0u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x104dfd98u));
            wr32(ecx + 0x19dd8u, 0u);
            wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u, 0u);
            eax = 0u;
        }
    }
L_100e410c: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e40a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e40a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
