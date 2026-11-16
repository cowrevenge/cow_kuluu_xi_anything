/* f_0x1012edd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012edd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(self + 0x1b4u) == 9u) goto L_1012edea;
    eax = (uint32_t)(int16_t)rd16(self + 0x1b4u);
    if (eax != 0x10u) goto L_1012ee4d;
    ecx = self;
    edx = in_edx;
L_1012ede5: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037c50u), eax, ecx, edx);
    return;
L_1012edea: ;
    eax = 0u;
    ecx = rd32(COW_IMG(0x104dfd98u)) + 0x2c7d8u;
    edx = self + 0x14u;
L_1012edfa: ;
    if (rd32(ecx) != 0u) goto L_1012ee04;
    if (rd8(edx) == 0u) goto L_1012ee12;
L_1012ee04: ;
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        ecx = ecx + 0x48u;
        edx = edx + 0x34u;
        goto L_1012edfa;
    }
    eax = eax + 1u;
    ecx = ecx + 0x48u;
    edx = edx + 0x34u;
L_1012ee3d: ;
    if (rd16(self + 0x1b4u) != 0xau) goto L_1012ede5;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037b90u), eax, ecx, edx);
    return;
L_1012ee12: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10118db0u), eax + 1u, rd32(self + 8u), g->edx, 0, 2, eax + 1u, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x1057824cu));
    t4 = cow_thiscall(g, COW_IMG(0x10140d90u), t3, 4, 0u, 0u, COW_IMG(0x1012ed80u), 0u);
    t5 = g->ecx;
    t6 = g->edx;
    wr16(self + 0x1b4u, 0xau);
    eax = t4;
    ecx = t5;
    edx = t6;
    goto L_1012ee3d;
L_1012ee4d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012edd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012edd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
