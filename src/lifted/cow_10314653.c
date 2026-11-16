/* f_0x10314653 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10314653(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(COW_IMG(0x109b27b8u)) != 0u)
    {
        wr32(sp0 - 0x18u, 1u);
        if ((int32_t)rd32(sp0 + 4u) >= 256)
        {
            ebx = rd32(sp0 + 4u);
            goto L_103146b4;
        }
        ebx = rd32(sp0 + 4u);
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
        {
            eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 1u;
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, ebx);
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 3, ebx, 1u, in_edi);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
        if (eax != 0u) goto L_103146b4;
L_103146b0: ;
        eax = ebx;
    }
    else
    {
        if ((int32_t)rd32(sp0 + 4u) < 65)
        {
            eax = rd32(sp0 + 4u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(sp0 + 4u);
            if ((int32_t)eax > 90)
            {
                edx = in_edx;
            }
            else
            {
                eax = eax + 0x20u;
                edx = in_edx;
            }
        }
    }
L_10314719: ;
    g->edx = edx;
    return eax;
L_103146b4: ;
    if ((rd8(rd32(COW_IMG(0x103d0030u)) + (uint8_t)(uint32_t)((int32_t)ebx >> 8u) * 2u + 1u) & 0x80u) == 0u)
    {
        edx = rd32(COW_IMG(0x103d0030u));
        wr8(sp0 + 5u, 0u);
        wr8(sp0 + 4u, (uint8_t)ebx);
        eax = 1u;
    }
    else
    {
        eax = (uint32_t)((int32_t)ebx >> 8u);
        edx = rd32(COW_IMG(0x103d0030u));
        wr8(sp0 + 6u, 0u);
        wr32(sp0 - 0x18u, 2u);
        wr8(sp0 + 4u, (uint8_t)eax);
        wr8(sp0 + 5u, (uint8_t)ebx);
        eax = 2u;
    }
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 3u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, eax);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, 0x100u);
    wr32(sp0 - 0x34u, rd32(COW_IMG(0x109b27b8u)));
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x1031edeau), g->eax, sp0 - 8u, edx, 1, 8, rd32(COW_IMG(0x109b27b8u)), 0x100u, sp0 + 4u, eax, sp0 - 8u, 3u, 0u, 1u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        goto L_103146b0;
    }
    eax = t3;
    edx = t4;
    if (eax != 1u)
    {
        eax = rd8(sp0 - 7u) << 8u | rd8(sp0 - 8u);
    }
    else
    {
        eax = rd8(sp0 - 8u);
    }
    goto L_10314719;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314653(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10314653(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
