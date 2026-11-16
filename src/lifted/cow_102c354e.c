/* f_0x102c354e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c354e(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, 8u);
    wr8(sp0 - 0xcu, 0x89u);
    wr8(sp0 - 0xbu, 0x50u);
    wr8(sp0 - 0xau, 0x4eu);
    wr8(sp0 - 9u, 0x47u);
    wr8(sp0 - 8u, 0xdu);
    wr8(sp0 - 7u, 0xau);
    wr8(sp0 - 6u, 0x1au);
    wr8(sp0 - 5u, 0xau);
    if (arg3 <= 8u) goto L_102c3581;
    eax = 8u;
L_102c3586: ;
    if (arg2 <= 7u) goto L_102c3592;
L_102c358e: ;
    return 0u;
L_102c3581: ;
    if (arg3 < 1u) goto L_102c358e;
    eax = arg3;
    goto L_102c3586;
L_102c3592: ;
    wr32(sp0 - 0x10u, in_esi);
    if (arg2 + eax > 8u)
    {
        eax = 8u - arg2;
    }
    wr32(sp0 - 0x10u, eax);
    t1 = arg2 + sp0 - 0xcu;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, arg1 + arg2);
    g->eax = arg1 + arg2;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), arg2, 3, arg1 + arg2, t1, eax);
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c354e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c354e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
