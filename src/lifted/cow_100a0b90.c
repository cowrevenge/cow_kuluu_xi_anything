/* f_0x100a0b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100a0b90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    if ((uint16_t)rd32(sp0 + 0xcu) < 0x61u)
    {
        edx = rd32(sp0 + 0xcu);
        goto L_100a0b9e;
    }
    return 0xffffffffu;
L_100a0b9e: ;
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr8(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xa0u) + 0xf8u) != 0u)
    {
        edi = 0xfffffffeu;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr32(sp0 - 0x10u, 0xffu);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            ecx = t2;
            edx = t3;
            if (rd32(ecx + 0x170u) != 0x2fu)
            {
                wr32(sp0 - 0x10u, sp0 + 0xcu);
                wr32(sp0 - 0x14u, arg6);
                wr32(sp0 - 0x18u, arg4);
                wr32(sp0 - 0x1cu, edx);
                g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
                g->esp = sp0 - 0xcu;
                t6 = cow_cdecl(g, COW_IMG(0x100a0d80u), 4, edx, arg4, arg6, sp0 + 0xcu);
                eax = t6;
            }
            else
            {
                wr32(sp0 - 0x10u, arg6);
                wr32(sp0 - 0x14u, arg4);
                wr32(sp0 - 0x18u, edx);
                g->esp = sp0 - 0xcu;
                t5 = cow_cdecl(g, COW_IMG(0x100a0d40u), 3, edx, arg4, arg6);
                eax = t5;
            }
        }
        else
        {
            edx = t3;
            wr32(sp0 - 0x10u, arg6);
            wr32(sp0 - 0x14u, arg4);
            wr32(sp0 - 0x18u, edx);
            g->esp = sp0 - 0xcu;
            t4 = cow_cdecl(g, COW_IMG(0x100a0d00u), 3, edx, arg4, arg6);
            eax = t4;
        }
        if ((int32_t)eax < 0)
        {
            edi = eax;
        }
        else
        {
            edi = eax;
            t7 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr16(t7 + 0x1c0u, (uint16_t)edi);
            t8 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr8(t8 + 0x1bcu, 0xcu);
            t9 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr16(t9 + 0x1beu, (uint16_t)arg2);
            if (rd8(sp0 + 0xcu) != 0u)
            {
                eax = (t8 & 0xffffff00u) | rd8(sp0 + 0xcu);
                ecx = t9;
                edx = (t7 & 0xffff0000u) | (uint16_t)arg2;
                if (rd8(COW_IMG(0x104807f5u)) == 0u)
                {
                    if (!(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x12cu) >> 0x16u & 1u))
                    {
                        esi = rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x1fau);
                        if (rd32(COW_IMG(0x10480af0u) + esi * 4u) != 0u)
                        {
                            wr32(sp0 - 0x10u, esi);
                            g->esp = sp0 - 0xcu;
                            t10 = cow_cdecl(g, COW_IMG(0x100a0ce0u), 1, esi);
                            if ((uint8_t)t10 == 1u)
                            {
                                t11 = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                                wr16(t11 + 0x1c0u, (uint16_t)edi);
                                wr8(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0x1bcu, 0xcu);
                                wr16(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0x1beu, rd16(COW_IMG(0x10485f7au)));
                            }
                        }
                    }
                }
            }
        }
    }
    g->esi = in_esi;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0b90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
