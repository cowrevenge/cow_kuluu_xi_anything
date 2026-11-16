/* f_0x102a2e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102a2e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(COW_IMG(0x103bd524u)) == 0xffffffffu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x103bd524u));
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, self, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(COW_IMG(0x103bd524u), 0xffffffffu);
        ecx = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x103bd52cu)) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x103bd52cu));
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, ecx, edx, 1, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(COW_IMG(0x103bd52cu), 0xffffffffu);
        ecx = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x103bd528u)) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x103bd528u));
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->edx;
        wr32(COW_IMG(0x103bd528u), 0xffffffffu);
        edx = t5;
    }
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x44u) <= 0)
    {
        ebx = rd32(sp0 + 4u);
        goto L_102a2f45;
    }
    ebx = rd32(sp0 + 4u);
    esi = 0u;
    loc_4 = 0u;
L_102a2eb5: ;
    t6 = rd32(ebx + 0x48u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)rd32(esi + t6 + 4u) > 0)
    {
        eax = t6;
        ecx = 0u;
        loc_8 = 0u;
L_102a2ec8: ;
        if ((int32_t)rd32(ecx + rd32(eax + esi + 0x28u) + 0x44u) <= 0)
        {
            ebp = 0u;
        }
        else
        {
            edx = rd32(ecx + rd32(eax + esi + 0x28u) + 0x44u);
            eax = rd32(eax + esi + 0x28u);
            ebp = 0u;
            edi = ecx + 0x68u;
L_102a2ed9: ;
            if (rd32(eax + edi) != 0xffffffffu)
            {
                eax = rd32(eax + edi);
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, ecx, edx, 1, 1, eax);
                wr32(edi + rd32(esi + rd32(ebx + 0x48u) + 0x28u), 0xffffffffu);
                ecx = loc_8;
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(ecx + rd32(esi + rd32(ebx + 0x48u) + 0x28u) + 0x44u))
            {
                eax = rd32(esi + rd32(ebx + 0x48u) + 0x28u);
                edx = rd32(ebx + 0x48u);
                ebp = ebp + 1u;
                edi = edi + 4u;
                goto L_102a2ed9;
            }
            ebp = ebp + 1u;
        }
        t7 = rd32(sp0 + 4u) + 1u;
        t8 = rd32(ebx + 0x48u);
        t9 = rd32(esi + rd32(ebx + 0x48u) + 4u);
        wr32(sp0 + 4u, t7);
        if ((int32_t)t7 < (int32_t)t9)
        {
            eax = t8;
            loc_8 = ecx + 0x90u;
            ecx = ecx + 0x90u;
            goto L_102a2ec8;
        }
        edx = t7;
    }
    if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        esi = esi + 0x2cu;
        loc_4 = loc_4 + 1u;
        goto L_102a2eb5;
    }
L_102a2f45: ;
    if ((int32_t)rd32(ebx + 0x34u) <= 0)
    {
        eax = rd32(ebx + 0x34u);
    }
    else
    {
        esi = 0u;
        edi = 0u;
L_102a2f50: ;
        if (rd32(esi + rd32(ebx + 0x40u) + 0xcu) != 0xffffffffu)
        {
            eax = esi + rd32(ebx + 0x40u);
            ecx = rd32(esi + rd32(ebx + 0x40u) + 0xcu);
            if (rd32(eax + 0x28u) != 1u)
            {
                eax = rd32(eax + 0x28u);
                goto L_102a2f6c;
            }
            eax = rd32(eax + 0x28u);
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x10281b00u), g->eax, g->ecx, edx, 1, 1, ecx);
            t10 = g->edx;
            edx = t10;
L_102a2f76: ;
L_102a2f79: ;
            wr32(esi + rd32(ebx + 0x40u) + 0xcu, 0xffffffffu);
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(ebx + 0x34u))
        {
            esi = esi + 0x30u;
            edi = edi + 1u;
            goto L_102a2f50;
        }
        eax = rd32(ebx + 0x34u);
    }
    g->edx = edx;
    return eax;
L_102a2f6c: ;
    if (eax != 0u) goto L_102a2f79;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, ecx, edx, 1, 1, ecx);
    t11 = g->edx;
    edx = t11;
    goto L_102a2f76;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a2e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
