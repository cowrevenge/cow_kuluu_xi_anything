/* f_0x1031ad40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1031ad40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    double xin0 = ST(0);
    double xin1 = ST(1);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031ad4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; x1 = ST(0); xin0 = ST(1); goto E_1031ad4d;
    case 0x1031adb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; goto E_1031adb3;
    default: break;
    }
#endif

    COW_AT(1031ad40)
    wr8(in_ebp - 0x90u, 0xfeu);
    if ((uint8_t)(self >> 8u) != 0u) goto L_1031ad96;
    COW_AT(1031ad4b)
    eax = in_eax;
    ecx = (self & 0xffff00ffu) | (uint32_t)(uint8_t)(self >> 8u) << 8u;
    edx = in_edx;
    x1 = xin1;
L_1031ad4d: ;
    COW_AT(1031ad4d)
    g->esp = sp0;
    g->edx = edx;
    g->top = (g->top + 2u) & 7u;
    fpush(g, fr(g, xin0 * log2(x1)));
    return cow_tailcall(g, COW_IMG(0x1031ad5eu), eax, ecx, edx);
L_1031ad96: ;
    COW_AT(1031ad96)
    g->ecx = (self & 0xffff00ffu) | (uint32_t)(uint8_t)(self >> 8u) << 8u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x1031aee1u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1031adb3;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1031ad9f)
    if (eax == 2u)
    {
        ecx = ecx & 0xffff00ffu;
    }
    else
    {
        ecx = ecx & 0xffff00ffu;
    COW_AT(1031ada6)
        ecx = (ecx & 0xffff00ffu) | (uint32_t)(uint8_t)~(uint8_t)(ecx >> 8u) << 8u;
    }
    COW_AT(1031ada8)
    x1 = fabs(xin1);
    goto L_1031ad4d;
L_1031adb3: ;
    COW_AT(1031adb3)
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1031b0f6u), eax, ecx, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031ad40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031ad4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        double x1;
        double xin0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        x1 = ST(0);
        xin0 = ST(1);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1031adb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1031ad4b: holds self, which no location here says
     1031ad96: holds self, which no location here says
     1031ad9f: reads xin0, xin1, which no location holds here
     1031ada6: reads xin0, xin1, which no location holds here
     1031ada8: reads xin0, xin1, which no location holds here
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ad40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031ad40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
