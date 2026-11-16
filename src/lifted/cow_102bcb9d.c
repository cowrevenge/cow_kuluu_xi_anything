/* f_0x102bcb9d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bcb9d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(arg2) != 0x23u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102bcbf3;
    }
    wr32(sp0 - 0x1cu, in_esi);
    eax = 0u;
    ecx = arg2;
    edx = in_edx;
L_102bcbb6: ;
    t1 = rd8(ecx + 1u);
    t2 = rd8(ecx);
    wr8(ecx + sp0 - arg2 - 0x14u, (uint8_t)t1);
    if ((uint8_t)t2 == 0x20u)
    {
        edx = (edx & 0xffffff00u) | t1;
        goto L_102bcbc8;
    }
    edx = (edx & 0xffffff00u) | t1;
    if ((int32_t)(eax + 1u) < 15)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_102bcbb6;
    }
    eax = eax + 1u;
    ecx = ecx + 1u;
L_102bcbc8: ;
    if ((int32_t)eax <= 1) goto L_102bcbf3;
    if ((int32_t)eax >= 15) goto L_102bcbf3;
    wr8(eax + sp0 - 0x15u, 0u);
    wr32(sp0 - 0x1cu, arg2 + eax);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, COW_IMG(0x103c7bf4u));
    wr32(sp0 - 0x28u, COW_IMG(0x103d03e0u));
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c7bf4u), sp0 - 0x14u, arg2 + eax, in_edi);
    t3 = g->edx;
    edx = t3;
L_102bcc06: ;
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102bcbf3: ;
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, COW_IMG(0x103c7be0u));
    wr32(sp0 - 0x24u, COW_IMG(0x103d03e0u));
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c7be0u), arg2, in_edi, rd32(sp0 - 0x14u));
    t4 = g->edx;
    edx = t4;
    goto L_102bcc06;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bcb9d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bcb9d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
