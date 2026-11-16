/* f_0x101e2720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e2720(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x7cu, in_ebx);
    wr32(sp0 - 0x80u, in_esi);
    wr8(sp0 - 0x78u, 0u);
    wr16(sp0 - 0x6cu, 0u);
    eax = 0u;
    ecx = sp0 - 0x6au;
L_101e2738: ;
    wr8(eax + sp0 - 0x77u, 0u);
    wr16(ecx, 0u);
    wr8(eax + sp0 - 0x56u, 0u);
    if ((int32_t)(eax + 1u) < 10)
    {
        eax = eax + 1u;
        ecx = ecx + 2u;
        goto L_101e2738;
    }
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x40u, sp0 - 0x78u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0xau, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 6u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    wr16(sp0 - 0xcu, 0u);
    g->esp = sp0 - 0x80u;
    t1 = cow_call_regs(g, COW_IMG(0x101e26b0u), 0u, self, sp0 - 0x40u, 0, 1, sp0 - 0x40u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        g->esi = self;
        g->eax = sp0 - 0x40u;
        g->edx = edx;
        g->esp = sp0 - 0x80u;
        t3 = cow_stdcall(g, COW_IMG(0x101e2700u), 1, sp0 - 0x40u);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            g->esp = sp0 - 0x80u;
            cow_fastcall(g, COW_IMG(0x101e2300u), sp0 - 0x40u, edx, 0);
        }
    }
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e2720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
