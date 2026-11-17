/* f_0x102ad1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ad1f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ebx = rd32(sp0 + 4u);
        goto L_102ad2a7;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    ebx = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u) goto L_102ad2a7;
    if (rd32(eax + 0x54u) != 0u) goto L_102ad23b;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bf050u));
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x102858b0u), t1, t2, t3);
    return;
L_102ad23b: ;
    if (rd32(eax + 0x58u) != 0u)
    {
        ebp = rd32(eax + 0x58u);
        goto L_102ad26a;
    }
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bf03cu));
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t6;
    cow_tailcall(g, COW_IMG(0x102858b0u), t4, t5, t6);
    return;
L_102ad26a: ;
    if ((int32_t)rd32(ebx + 0x44u) <= 0) goto L_102ad2cd;
    edx = 0u;
    edi = 0u;
L_102ad275: ;
    if ((int32_t)rd32(edi * 4u + rd32(ebx + 0x48u)) > 0)
    {
        ecx = rd32(edi * 4u + rd32(ebx + 0x48u));
        eax = ebp + edx * 0xcu + 8u;
        edx = ecx + edx;
L_102ad288: ;
        wr32(eax - 8u, 0u);
        wr32(eax - 4u, 0u);
        wr32(eax, 0x3f800000u);
        if (ecx != 1u)
        {
            eax = eax + 0xcu;
            ecx = ecx - 1u;
            goto L_102ad288;
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        edi = edi + 1u;
        goto L_102ad275;
    }
    g->ebx = in_ebx;
    return;
L_102ad2a7: ;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t8 = g->ecx;
    t9 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bf024u));
L_102ad2cd: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ad1f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
