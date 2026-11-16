/* f_0x100e4630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e4630(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e464e;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xdbu, 1u, 1u);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_100e4651;
    }
    eax = t1;
L_100e464e: ;
    return eax & 0xffffff00u;
L_100e4651: ;
    wr32(eax + 4u, 0u);
    t2 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2cfd8u);
    t3 = rd32(COW_IMG(0x104dfd98u));
    wr32(eax + 8u, t2);
    t4 = rd32(t3 + 0x2cfdcu);
    wr32(eax + 0xcu, t4);
    t5 = rd32(t3 + 0x2cfe0u);
    wr8(eax + 5u, 0u);
    wr32(eax + 0x10u, t5);
    wr8(eax + 6u, (uint8_t)arg1);
    wr32(eax + 0x24u, arg2);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x28u, 0u);
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
