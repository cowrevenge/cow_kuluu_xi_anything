/* f_0x102f6809 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102f6809(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    edi = 1u;
L_102f6812: ;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x102f6728u), g->eax, ecx, edx, 1, 4, arg1, edi, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)(edi - 1u) >= 0)
    {
        eax = t1;
        ecx = edi;
        edx = t2;
        edi = edi - 1u;
        goto L_102f6812;
    }
    eax = t1;
    ecx = edi;
    edx = t2;
    t3 = rd32(arg1 + 4u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x103028d6u), g->eax, ecx, edx, 1, 2, arg1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(arg1 + 4u, 0u);
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x10302913u), 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6809(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6809(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
