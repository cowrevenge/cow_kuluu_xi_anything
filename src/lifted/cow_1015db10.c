/* f_0x1015db10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015db10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        goto L_1015db63;
    }
    ebp = rd32(sp0 + 4u);
    if ((int8_t)rd8(ebp + 0x60u) >= 5) goto L_1015db5d;
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
    t2 = g->edx;
    wr32(sp0 + 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        edi = t1;
        goto L_1015db4e;
    }
    eax = t1;
    edx = t2;
L_1015db32: ;
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
    t4 = g->edx;
    if ((int8_t)rd8(t3 + 0x60u) < 5)
    {
        edx = t4;
        edi = eax;
        eax = t3;
        goto L_1015db4e;
    }
    edx = t4;
    edi = eax;
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1015db32;
    }
    eax = rd32(sp0 + 4u);
L_1015db4e: ;
    wr32(sp0 - 0x10u, ebp);
    wr32(sp0 - 0x14u, edi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x10126700u), self, 2, edi, ebp);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return t5;
L_1015db5d: ;
    wr32(sp0 - 0xcu, ebp);
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10126480u), self, 1, ebp);
    eax = t6;
L_1015db63: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015db10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015db10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
