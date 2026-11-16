/* f_0x1018d640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018d640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self, COW_IMG(0x103368a0u));
    wr8(self + 0x10cu, 0u);
    wr8(self + 0x10du, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 0x88u, 0u);
    eax = self + 0x8cu;
    ecx = 8u;
L_1018d66b: ;
    wr8(eax - 0x84u, 0u);
    wr8(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_1018d66b;
    }
    eax = eax + 0x10u;
    wr8(self + 0x10eu, 0u);
    if (rd32(COW_IMG(0x10662db0u)) == 0u)
    {
        edx = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662db0u));
        g->eax = self + 8u;
        g->edx = 0u;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101b9f20u), ecx, 8, 1u, 0u, COW_IMG(0x10377c78u), self + 8u, 0x80u, COW_IMG(0x1018da20u), self, 1u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1018dcb0u), self, 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018d640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018d640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
