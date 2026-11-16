/* f_0x10253510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10253510(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 > 3)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        if (rd8(COW_IMG(0x10389d0du) + arg1 * 0x14u) == 0u)
        {
            eax = (arg1 * 5u & 0xffffff00u) | rd8(COW_IMG(0x10389d0du) + arg1 * 0x14u);
            edx = in_edx;
        }
        else
        {
            if (rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u) != 0u)
            {
                ecx = self;
                edx = in_edx & 0xffffff00u;
                goto L_10253577;
            }
            eax = rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
            t1 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
            g->eax = eax;
            g->ecx = t1;
            g->edx = in_edx & 0xffffff00u;
            g->esp = sp0 - 4u;
            t2 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t1, in_edi, in_esi);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(COW_IMG(0x10389d18u) + arg1 * 0x14u, t2);
            if (t2 == 0u)
            {
                ecx = t3;
                edx = t4;
            }
            else
            {
                edi = t2;
                t5 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
                eax = 0u;
                ecx = t5 >> 2u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t5 & 3u;
                while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                edx = t5;
            }
            if (rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u) == 0u)
            {
                eax = rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
                edx = (edx & 0xffffff00u) | 1u;
                goto L_102535c5;
            }
            edx = (edx & 0xffffff00u) | 1u;
L_10253577: ;
            if ((int32_t)arg3 <= 0)
            {
                eax = arg3;
            }
            else
            {
                ebx = in_ebx & 0xffffff00u;
                edi = 0u;
L_10253586: ;
                if (rd8(edi + rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u)) != rd8(arg2 + edi))
                {
                    eax = edi + rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
                    ecx = (ecx & 0xffffff00u) | rd8(arg2 + edi);
                    goto L_10253596;
                }
                eax = edi + rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
                ecx = (ecx & 0xffffff00u) | rd8(arg2 + edi);
                if ((uint8_t)edx == 0u) goto L_1025359a;
L_10253596: ;
                wr8(eax, (uint8_t)ecx);
                ebx = (ebx & 0xffffff00u) | 1u;
L_1025359a: ;
                if ((int32_t)(edi + 1u) < (int32_t)arg3)
                {
                    edi = edi + 1u;
                    goto L_10253586;
                }
                if ((uint8_t)ebx == 0u)
                {
                    eax = arg3;
                }
                else
                {
                    if (rd32(COW_IMG(0x10662dccu)) == 0u)
                    {
                        eax = arg3;
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10662dccu));
                        t6 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
                        t7 = rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
                        t8 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
                        g->eax = t7;
                        g->edx = t8;
                        g->esp = sp0 - 0xcu;
                        t9 = cow_thiscall(g, COW_IMG(0x101c4940u), ecx, 4, t8, t7, t6, 0u);
                        t10 = g->edx;
                        eax = t9;
                        edx = t10;
                    }
                }
            }
        }
    }
L_102535c5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253510(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
