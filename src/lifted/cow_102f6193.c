/* f_0x102f6193 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102f6193(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 1u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = rd32(arg1 + 4u);
    }
    else
    {
        esi = rd32(arg1 + 4u);
        wr32(rd32(arg1) + 0x14u, 0xcu);
        wr32(rd32(arg1) + 0x18u, arg2);
        g->eax = rd32(arg1);
        g->edx = in_edx;
        t1 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall_cdecl(g, rd32(t1), self, 1, arg1);
        t3 = g->edx;
        eax = t2;
        ecx = arg1;
        edx = t3;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x102f5ed9u), g->eax, ecx, edx, 1, 5, arg1, arg2, 0x78u, in_edi, in_esi);
    t5 = g->edx;
    wr32(t4, 0u);
    wr32(t4 + 4u, arg5);
    wr32(t4 + 8u, arg4);
    wr32(t4 + 0xcu, arg6);
    wr8(t4 + 0x22u, 0u);
    wr8(t4 + 0x20u, (uint8_t)arg3);
    t6 = rd32(esi + 0x40u);
    wr32(t4 + 0x24u, t6);
    wr32(esi + 0x40u, t4);
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6193(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6193(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
