/* f_0x10130000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10130000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u) goto L_1013002c;
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(ecx + 0x2c7c8u) != 0xau) goto L_10130072;
    wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
L_1013004a: ;
    t2 = rd32(self + 8u);
    wr32(self + 0x1c0u, 0xffffffffu);
    wr8(t2 + 0x5du, 0u);
    wr16(self + 0x1b4u, rd16(self + 0x1b6u));
    wr16(self + 0x1b6u, 0x18u);
L_10130072: ;
    return;
L_1013002c: ;
    if ((int32_t)rd32(self + 0x1c0u) > 0) goto L_10130072;
    eax = rd32(self + 0x1c0u);
    if (rd32(COW_IMG(0x10578158u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129e30u), ecx, 1, 0x85u);
        t1 = g->ecx;
        ecx = t1;
    }
    goto L_1013004a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10130000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
