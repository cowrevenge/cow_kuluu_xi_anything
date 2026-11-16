/* f_0x1010fc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1010fc50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    if (rd32(COW_IMG(0x104e1708u)) == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x2cu, arg2);
        g->esp = sp0 - 0x28u;
        t1 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x20u, 1, arg2);
        if (rd32(t1 + 4u) == 0u)
        {
            eax = rd32(t1 + 4u);
            edx = 0u;
        }
        else
        {
            eax = rd32(t1 + 4u);
            edx = rd32(eax + 4u);
        }
        wr32(sp0 - 0x2cu, in_ebx);
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x34u, in_edi);
        ebx = 3u;
        edi = sp0 - 0x18u;
L_1010fc88: ;
        wr32(edi, 0u);
        if (edx != 0u)
        {
            if (rd8(edx) != 0u)
            {
                ecx = 0u;
                esi = 5u;
L_1010fc9e: ;
                if (rd8(edx) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(edx);
                    ecx = ecx << 6u;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(edx);
                    ecx = ecx << 6u;
                    if ((uint8_t)eax <= 0x60u)
                    {
                        eax = (uint8_t)eax - 0x20u;
                    }
                    else
                    {
                        eax = (uint8_t)eax - 0x40u;
                    }
                    ecx = ecx | (eax & 0x3fu);
                    eax = eax & 0x3fu;
                    edx = edx + 1u;
                }
                if (esi != 1u)
                {
                    esi = esi - 1u;
                    goto L_1010fc9e;
                }
                wr32(edi, ecx);
            }
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            edi = edi + 4u;
            goto L_1010fc88;
        }
        wr32(sp0 - 0x38u, arg1);
        g->esp = sp0 - 0x34u;
        t2 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x28u, 1, arg1);
        if (rd32(t2 + 4u) == 0u)
        {
            edx = 0u;
        }
        else
        {
            eax = rd32(t2 + 4u);
            edx = rd32(eax + 4u);
        }
        ecx = sp0 - 0xcu;
        ebx = 3u;
L_1010fcf3: ;
        wr32(ecx, 0u);
        if (edx != 0u)
        {
            if (rd8(edx) != 0u)
            {
                edi = 5u;
L_1010fd07: ;
                t3 = rd32(ecx) << 6u;
                wr32(ecx, t3);
                if (rd8(edx) != 0u)
                {
                    eax = (t3 & 0xffffff00u) | rd8(edx);
                    esi = t3;
                    if ((uint8_t)eax <= 0x60u)
                    {
                        eax = (uint8_t)eax - 0x20u;
                    }
                    else
                    {
                        eax = (uint8_t)eax - 0x40u;
                    }
                    t4 = (eax & 0x3fu) | esi;
                    wr32(ecx, t4);
                    edx = edx + 1u;
                }
                if (edi != 1u)
                {
                    edi = edi - 1u;
                    goto L_1010fd07;
                }
            }
        }
        if (ebx != 1u)
        {
            ecx = ecx + 4u;
            ebx = ebx - 1u;
            goto L_1010fcf3;
        }
        wr32(sp0 - 0x38u, arg4);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, arg3);
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        g->eax = arg3;
        g->esp = sp0 - 0x34u;
        t5 = cow_fastcall(g, COW_IMG(0x1010fa30u), rd32(COW_IMG(0x104e1708u)), sp0 - 0xcu, 5, sp0 - 0xcu, sp0 - 0x18u, arg3, 0u, arg4);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
        t8 = g->edx;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
        ebx = rd32(sp0 - 0x2cu);
        esi = rd32(sp0 - 0x30u);
        edi = rd32(sp0 - 0x34u);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010fc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010fc50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
