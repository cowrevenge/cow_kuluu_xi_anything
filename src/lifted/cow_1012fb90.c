/* f_0x1012fb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012fb90(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(COW_IMG(0x10578470u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
        ecx = rd32(COW_IMG(0x10578470u));
        goto L_1012fbbb;
    }
    t1 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    wr16(self + 0x1b4u, 0x18u);
    return;
L_1012fbbb: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1014f820u), eax, ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint16_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        edi = t2;
    }
    else
    {
        eax = t2;
        edi = t2;
        wr16(rd32(COW_IMG(0x10578470u)) + 0x15cu, 0u);
        t4 = rd32(self + 8u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t4, 2, t4, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if ((uint16_t)edi != 3u) goto L_1012fc54;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 0x48u + 0x2c790u) - 1u > 0xfu)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        edx = rd32(rd32(COW_IMG(0x104dfd98u)) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 0x48u + 0x2c790u);
        goto L_1012fc54;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    ecx = rd32(self + 8u);
    edi = rd32(rd32(COW_IMG(0x104dfd98u)) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 0x48u + 0x2c790u) - 1u;
    t7 = rd32(COW_IMG(0x1012fc60u) + rd8(COW_IMG(0x1012fc6cu) + edi) * 4u);
    edx = rd8(COW_IMG(0x1012fc6cu) + edi);
    switch (t7 - RD)
    {
    case 0x1012fc1cu: goto L_1012fc1c;
    case 0x1012fc38u: goto L_1012fc38;
    case 0x1012fc54u: goto L_1012fc54;
    default: rt_fatal(g, COW_IMG(0x1012fc15u), "switch");
    }
    return;
L_1012fc1c: ;
    wr8(ecx + 0x5du, 1u);
    wr16(self + 0x1b4u, 0x11u);
    wr32(self + 0x1bcu, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10130170u), eax, self, edx);
    return;
L_1012fc38: ;
    wr8(ecx + 0x5du, 1u);
    wr16(self + 0x1b8u, 0x10u);
    wr16(self + 0x1b4u, 0x13u);
    wr32(self + 0x1bcu, eax);
L_1012fc54: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10130170u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012fb90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012fb90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
