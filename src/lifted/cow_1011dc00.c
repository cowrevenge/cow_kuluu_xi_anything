/* f_0x1011dc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1011dc00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, sp0 + 8u);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t1);
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall_cdecl(g, COW_IMG(0x1011daa0u), t1, 2, t1, sp0 + 8u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)rd32(sp0 + 8u) < 0x61u)
    {
        eax = rd32(sp0 + 8u);
        ecx = t2;
        edx = t3;
        goto L_1011dc30;
    }
    eax = rd32(sp0 + 8u);
    ecx = t2;
    edx = t3;
    if ((uint16_t)eax > 0x7au) goto L_1011dc30;
    wr32(sp0 + 8u, eax + 0xffe0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), eax + 0xffe0u, ecx, edx);
    return;
L_1011dc30: ;
    if ((uint16_t)eax < 0x85bfu) goto L_1011dc4a;
    if ((uint16_t)eax > 0x85d5u) goto L_1011dc4a;
    wr32(sp0 + 8u, eax + 0xffe0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), eax + 0xffe0u, ecx, edx);
    return;
L_1011dc4a: ;
    if ((uint16_t)eax < 0x85d7u) goto L_1011dc64;
    if ((uint16_t)eax > 0x85ddu) goto L_1011dc64;
    wr32(sp0 + 8u, eax + 0xffe0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), eax + 0xffe0u, ecx, edx);
    return;
L_1011dc64: ;
    if ((uint16_t)eax != 0x855cu) goto L_1011dc78;
    wr32(sp0 + 8u, 0x854cu);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), 0x854cu, ecx, edx);
    return;
L_1011dc78: ;
    if ((uint16_t)eax != 0x855au) goto L_1011dc8c;
    wr32(sp0 + 8u, 0x854au);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), 0x854au, ecx, edx);
    return;
L_1011dc8c: ;
    if ((uint16_t)eax != 0x855eu) goto L_1011dca0;
    wr32(sp0 + 8u, 0x854eu);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), 0x854eu, ecx, edx);
    return;
L_1011dca0: ;
    if ((uint16_t)eax == 0x85deu)
    {
        eax = 0x855fu;
    }
    wr32(sp0 + 8u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011dae0u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011dc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011dc00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
