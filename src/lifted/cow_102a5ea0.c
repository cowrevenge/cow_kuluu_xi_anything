/* f_0x102a5ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a5ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) != 0xffffffffu)
    {
        eax = rd32(sp0 + 4u);
        goto L_102a5ebd;
    }
    if (rd32(COW_IMG(0x109a2864u)) != 0u) goto L_102a5ee8;
L_102a5eb2: ;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x102a5f00u), 0);
    t2 = g->edx;
    wr32(COW_IMG(0x109a2864u), t1);
    g->edx = t2;
    return t1;
L_102a5ebd: ;
    if (eax == 0u)
    {
        eax = rd32(COW_IMG(0x109a2864u));
        goto L_102a5ed7;
    }
    eax = rd32(COW_IMG(0x109a2864u));
    if (eax == 0u) goto L_102a5eb2;
    wr32(sp0 + 4u, COW_IMG(0x103bdec0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x102858b0u), eax, self, in_edx);
L_102a5ed7: ;
    if (eax != 0u) goto L_102a5ee8;
    wr32(sp0 + 4u, COW_IMG(0x103bde78u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x102858b0u), eax, self, in_edx);
L_102a5ee8: ;
    wr32(sp0 + 4u, COW_IMG(0x109a2864u));
    if (rd32(rd32(sp0 + 4u)) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u));
        edx = in_edx;
        ebx = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u));
        ebx = rd32(sp0 + 4u);
        ecx = self;
        edx = in_edx;
L_102a5f5c: ;
        t3 = rd32(eax + 0x104u);
        wr32(eax + 0x104u, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bde10u), 0x57u);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            goto L_102a5f5c;
        }
        eax = t3;
        edx = t5;
    }
    wr32(ebx, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a5ea0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
