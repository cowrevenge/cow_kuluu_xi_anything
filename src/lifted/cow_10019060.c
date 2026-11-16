/* f_0x10019060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10019060(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 228u);

    wr32(sp0 - 0xccu, sp0 - 0xc4u);
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0xc8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xdcu, arg2);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0xe0u, t1);
    wr32(sp0 - 0xc4u, 0x40u);
    wr32(sp0 - 0xc8u, 0u);
    g->eax = t1;
    g->esp = sp0 - 0xc8u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, t1, arg2, 0u, sp0 - 0xc8u, sp0 - 0xc0u, sp0 - 0xc4u);   /* advapi32.dll!RegQueryValueExA */
    if (t2 != 0u)
    {
        eax = t2;
        goto L_100190cf;
    }
    eax = t2;
    wr32(sp0 - 0xccu, 0x40u);
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0x80u);
    g->esp = sp0 - 0xc8u;
    cow_call_regs(g, COW_IMG(0x103136b7u), g->eax, sp0 - 0xc0u, sp0 - 0x80u, 1, 3, sp0 - 0x80u, sp0 - 0xc0u, 0x40u);
    t3 = g->edx;
    wr32(sp0 - 0xccu, arg1);
    wr32(sp0 - 0xd0u, sp0 - 0x80u);
    g->eax = arg1;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x103294bcu)), 2, sp0 - 0x80u, arg1);   /* ole32.dll!CLSIDFromString */
    return (t4 & 0xffffff00u) | 1u;
L_100190cf: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019060(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
