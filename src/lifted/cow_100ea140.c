/* f_0x100ea140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100ea140(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0x18u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    eax = t1;
    ebp = 0u;
    esi = 0u;
    edi = rd32(COW_IMG(0x104dfd98u));
    loc_4 = 0u;
    loc_8 = rd32(sp0 - 8u) & 0xffffffu;
L_100ea163: ;
    if (loc_4 == 0u)
    {
        if ((uint8_t)arg1 != 5u)
        {
            ecx = (uint8_t)arg1;
        }
        else
        {
            ecx = 0u;
        }
        if (rd32(edi + esi + (uint8_t)ecx * 0x8c4u + 0x57ecu) == 0u)
        {
            if ((uint8_t)arg1 != 5u)
            {
                ecx = (uint8_t)arg1;
            }
            else
            {
                ecx = 0u;
            }
            t2 = edi + esi + (uint8_t)ecx * 0x8c4u + 0x57d8u;
            wr8(t2, loc_8 >> 0x18u);
            edi = rd32(COW_IMG(0x104dfd98u));
            loc_4 = t2;
        }
    }
    if ((uint8_t)arg1 != 5u)
    {
        ecx = (uint8_t)arg1;
    }
    else
    {
        ecx = 0u;
    }
    if (eax == rd32(edi + esi + (uint8_t)ecx * 0x8c4u + 0x57f4u))
    {
        ecx = (uint8_t)ecx * 0x231u;
    }
    else
    {
        if ((uint8_t)arg1 != 5u)
        {
            ecx = (uint8_t)arg1;
        }
        else
        {
            ecx = 0u;
        }
        if (rd32(edi + esi + (uint8_t)ecx * 0x8c4u + 0x57f4u) <= eax)
        {
            if ((uint8_t)arg1 != 5u)
            {
                ecx = (uint8_t)arg1;
            }
            else
            {
                ecx = 0u;
            }
            ecx = -(0x7fffffffu < eax - rd32(edi + esi + (uint8_t)ecx * 0x8c4u + 0x57f4u)) + 1u;
        }
        else
        {
            if ((uint8_t)arg1 != 5u)
            {
                ecx = (uint8_t)arg1;
            }
            else
            {
                ecx = 0u;
            }
            ecx = 0x7fffffffu < rd32(edi + esi + (uint8_t)ecx * 0x8c4u + 0x57f4u) - eax;
        }
        if (ecx != 0u)
        {
            if ((uint8_t)arg1 != 5u)
            {
                eax = (uint8_t)arg1;
            }
            else
            {
                eax = 0u;
            }
            t3 = rd32(edi + esi + (uint8_t)eax * 0x8c4u + 0x57f4u);
            wr8(edi + esi + (uint8_t)eax * 0x8c4u + 0x57d8u, loc_8 >> 0x18u);
            ecx = esi + (uint8_t)eax * 0x8c4u;
            ebp = edi + esi + (uint8_t)eax * 0x8c4u + 0x57d8u;
            eax = t3;
            edi = rd32(COW_IMG(0x104dfd98u));
        }
    }
    if ((uint8_t)((loc_8 >> 0x18u) + 1u) < 0x14u)
    {
        esi = esi + 0x70u;
        loc_8 = (loc_8 & 0xffffffu) | (uint8_t)((loc_8 >> 0x18u) + 1u) << 0x18u;
        goto L_100ea163;
    }
    if (loc_4 != 0u)
    {
        eax = loc_4;
        goto L_100ea356;
    }
    if (ebp != 0u)
    {
        loc_4 = ebp;
        goto L_100ea352;
    }
    return;
L_100ea352: ;
    eax = loc_4;
L_100ea356: ;
    wr32(eax + 0x38u, 0u);
    wr32(eax + 0x3cu, 0u);
    wr32(eax + 0x40u, 0u);
    wr32(eax + 0x44u, 0u);
    wr32(eax + 0x48u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ea140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
