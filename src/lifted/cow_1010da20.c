/* f_0x1010da20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1010da20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(arg2 + 4u) == 0u)
    {
        eax = rd32(arg2 + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(arg2 + 4u);
        esi = rd32(eax + 4u);
    }
    ebx = sp0 - 0x18u;
    ebp = 3u;
L_1010da42: ;
    wr32(ebx, 0u);
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            edx = 0u;
            edi = 5u;
L_1010da58: ;
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                edx = edx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                edx = edx << 6u;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                edx = edx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                esi = esi + 1u;
            }
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_1010da58;
            }
            wr32(ebx, edx);
        }
    }
    if (ebp != 1u)
    {
        ebx = ebx + 4u;
        ebp = ebp - 1u;
        goto L_1010da42;
    }
    if (rd32(arg1 + 4u) == 0u)
    {
        eax = rd32(arg1 + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(arg1 + 4u);
        esi = rd32(eax + 4u);
    }
    ebp = 3u;
    edi = sp0 - 0xcu;
L_1010daa3: ;
    wr32(edi, 0u);
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            edx = 0u;
            ebx = 5u;
L_1010dab9: ;
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                edx = edx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                edx = edx << 6u;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                edx = edx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                esi = esi + 1u;
            }
            if (ebx != 1u)
            {
                ebx = ebx - 1u;
                goto L_1010dab9;
            }
            wr32(edi, edx);
        }
    }
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_1010daa3;
    }
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->eax = sp0 - 0x18u;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x1010d8e0u), self, 2, sp0 - 0xcu, sp0 - 0x18u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010da20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010da20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
