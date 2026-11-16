/* f_0x1009b3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1009b3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 + 4u) * 4u) != 0u)
    {
        ecx = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 + 4u) * 4u;
        esi = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 + 4u) * 4u);
        wr32(sp0 + 4u, arg2);
        if (rd8(esi + 0xefu) == (uint32_t)(int8_t)rd8(arg2))
        {
            eax = rd32(sp0 + 4u);
        }
        else
        {
            eax = rd32(sp0 + 4u);
            edx = (in_edx & 0xffffff00u) | rd8(arg2);
            wr8(esi + 0xefu, (uint8_t)edx);
            t1 = rd32(esi + 0x120u) | 1u;
            wr32(esi + 0x120u, t1);
        }
        if (rd16(rd32(ecx) + 0xfcu) == rd16(eax))
        {
            esi = (esi & 0xffff0000u) | rd16(eax);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 1u);
            wr16(edx + 0xfcu, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0xfeu) == rd16(eax + 2u))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 2u);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 2u);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 2u);
            wr16(edx + 0xfeu, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x100u) == rd16(eax + 4u))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 4u);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 4u);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 4u);
            wr16(edx + 0x100u, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x102u) == rd16(eax + 6u))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 6u);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 6u);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 8u);
            wr16(edx + 0x102u, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x104u) == rd16(eax + 8u))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 8u);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 8u);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 0x10u);
            wr16(edx + 0x104u, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x106u) == rd16(eax + 0xau))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 0xau);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 0xau);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 0x20u);
            wr16(edx + 0x106u, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x108u) == rd16(eax + 0xcu))
        {
            esi = (esi & 0xffff0000u) | rd16(eax + 0xcu);
        }
        else
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 0xcu);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 0x40u);
            wr16(edx + 0x108u, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x10au) != rd16(eax + 0xeu))
        {
            edx = rd32(ecx);
            esi = (esi & 0xffff0000u) | rd16(eax + 0xeu);
            wr8(edx + 0xf4u, rd8(edx + 0xf4u) | 0x80u);
            wr16(edx + 0x10au, (uint16_t)esi);
        }
        if (rd16(rd32(ecx) + 0x10cu) != rd16(eax + 0x10u))
        {
            eax = (eax & 0xffff0000u) | rd16(eax + 0x10u);
            ecx = rd32(ecx);
            wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 1u);
            wr16(ecx + 0x10cu, (uint16_t)eax);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009b3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009b3f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
