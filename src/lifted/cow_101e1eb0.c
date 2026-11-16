/* f_0x101e1eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e1eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) != arg1)
    {
        eax = rd32(self);
        goto L_101e1ed2;
    }
    t1 = rd32(arg1 + 0x20u);
    wr32(self, t1);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101e2480u), arg1, 0);
    wr32(arg1 + 0x20u, 0u);
    return;
L_101e1ed2: ;
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_101e1efd;
    }
    ecx = eax;
L_101e1ed8: ;
    if (rd32(ecx + 0x20u) == arg1) goto L_101e1ef7;
    eax = rd32(ecx + 0x20u);
    if (eax != 0u)
    {
        ecx = eax;
        goto L_101e1ed8;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101e2480u), arg1, 0);
    wr32(arg1 + 0x20u, 0u);
    return;
L_101e1ef7: ;
    t2 = rd32(arg1 + 0x20u);
    wr32(ecx + 0x20u, t2);
    edx = t2;
L_101e1efd: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101e2480u), arg1, 0);
    wr32(arg1 + 0x20u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e1eb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
