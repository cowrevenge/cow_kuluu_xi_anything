/* f_0x10002f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10002f20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x478u, in_ebx, self & 0xffffffu);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1000302f;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10003070u), eax, 0);
    wr32(COW_IMG(0x103d3cbcu), t3);
    if (t3 == 0u)
    {
        eax = t3;
        loc_4 = self & 0xffffffu;
    }
    else
    {
        eax = t3;
        g->eax = eax;
        g->edx = arg1;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10003110u), eax, 5, arg1, arg2, arg3, arg4, arg5);
        t5 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            eax = t4;
            loc_4 = (self & 0xffffffu) | (uint8_t)t4 << 0x18u;
        }
        else
        {
            eax = t4;
            edx = t5;
            loc_4 = (self & 0xffffffu) | (uint8_t)t4 << 0x18u;
            if ((uint8_t)arg5 == 1u)
            {
                edx = (edx & 0xffffff00u) | 1u;
                if (rd32(rd32(COW_IMG(0x103d3cbcu)) + 0x450u) == 0x8086u)
                {
                    ecx = rd32(COW_IMG(0x103d3cbcu));
                    if (rd32(ecx + 0x454u) == 0x2562u)
                    {
                        eax = rd32(ecx + 0x454u);
                    }
                    else
                    {
                        eax = rd32(ecx + 0x454u);
                        if (eax != 0x1132u)
                        {
                            if (eax != 0x7121u)
                            {
                                if (eax != 0x7123u)
                                {
                                    if (eax != 0x7125u)
                                    {
                                        if (eax != 0x7127u)
                                        {
                                            if (eax != 0x3577u)
                                            {
                                                if (eax != 0x3582u)
                                                {
                                                    wr8(ecx + 0x474u, (uint8_t)edx);
                                                    ecx = rd32(COW_IMG(0x103d3cbcu));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (rd32(ecx + 0x450u) == 0x8086u)
                    {
                        if (rd32(ecx + 0x454u) == 0x2582u)
                        {
                            eax = rd32(ecx + 0x454u);
                        }
                        else
                        {
                            eax = rd32(ecx + 0x454u);
                            if (eax != 0x2782u)
                            {
                                if (eax != 0x2572u)
                                {
                                    if (eax != 0x3582u)
                                    {
                                        if (eax != 0x2562u)
                                        {
                                            if (eax != 0x3577u)
                                            {
                                                wr8(ecx + 0x474u, (uint8_t)edx);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (eax & 0xffffff00u) | loc_4 >> 0x18u;
L_1000302f: ;
    wr32(COW_IMG(0x103d3cbcu), 0u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10002f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
