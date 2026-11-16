/* f_0x102560b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102560b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    int64_t q3;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 8u) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        t1 = rd32(sp0 + 4u) + 0x24u;
        t2 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, t1);
        eax = t2;
        edx = t1;
        loc_4 = ecx;
L_102560d4: ;
        if (eax != 0u)
        {
            wr8(eax, rd8(arg3));
            if (rd32(arg3 + 4u) != 0u)
            {
                eax = rd32(arg3 + 4u);
                q3 = (int64_t)cow_muls(0x92492493u, rd32(arg3 + 8u) - eax);
                t4 = (uint32_t)((int32_t)(cow_qhi(q3) + rd32(arg3 + 8u) - eax) >> 4u);
                edx = t4 + (t4 >> 0x1fu);
            }
            else
            {
                edx = 0u;
            }
            if ((int32_t)edx >= 0)
            {
                eax = edx;
            }
            else
            {
                eax = 0u;
            }
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 0x1cu, edx, 1, 3, eax * 0x1cu, in_edi, in_esi);
            t6 = rd32(sp0 + 8u);
            wr32(t6 - 0x20u, t5);
            if (rd32(arg3 + 4u) == rd32(arg3 + 8u))
            {
                eax = t5;
                edx = t6;
                edi = t5;
                goto L_10256149;
            }
            eax = t5;
            edx = t6;
            ebx = rd32(arg3 + 4u);
            ebp = rd32(arg3 + 8u);
            edi = t5;
L_10256133: ;
            if (edi != 0u)
            {
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t7 = cow_call_regs(g, COW_IMG(0x10255f70u), eax, edi, g->edx, 0, 1, ebx);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
            if (ebx + 0x1cu != ebp)
            {
                ebx = ebx + 0x1cu;
                edi = edi + 0x1cu;
                goto L_10256133;
            }
            edi = edi + 0x1cu;
L_10256149: ;
            t9 = rd32(sp0 + 8u);
            wr32(t9 - 0x1cu, edi);
            wr32(t9 - 0x18u, edi);
            wr8(t9 - 0x14u, rd8(arg3 + 0x10u));
            if (rd32(arg3 + 0x14u) != 0u)
            {
                ecx = rd32(arg3 + 0x14u);
                ebx = t9;
                eax = (uint32_t)((int32_t)(rd32(arg3 + 0x18u) - ecx) >> 2u);
            }
            else
            {
                ebx = t9;
                eax = 0u;
            }
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 4u, edx, 1, 3, eax * 4u, in_edi, in_esi);
            wr32(ebx - 0x10u, t10);
            if (rd32(arg3 + 0x14u) == rd32(arg3 + 0x18u))
            {
                eax = t10;
                edx = rd32(arg3 + 0x18u);
                goto L_102561a1;
            }
            eax = t10;
            ecx = rd32(arg3 + 0x14u);
            edx = rd32(arg3 + 0x18u);
L_1025618f: ;
            if (eax != 0u)
            {
                wr32(eax, rd32(ecx));
            }
            if (ecx + 4u != edx)
            {
                eax = eax + 4u;
                ecx = ecx + 4u;
                goto L_1025618f;
            }
            eax = eax + 4u;
L_102561a1: ;
            wr32(ebx - 0xcu, eax);
            wr32(ebx - 8u, eax);
            t11 = rd8(arg3 + 0x20u);
            wr8(ebx - 4u, (uint8_t)t11);
            if (rd32(arg3 + 0x24u) != 0u)
            {
                ecx = rd32(arg3 + 0x24u);
                edx = (edx & 0xffffff00u) | t11;
                eax = (uint32_t)((int32_t)(rd32(arg3 + 0x28u) - ecx) >> 3u);
            }
            else
            {
                ecx = rd32(arg3 + 0x24u);
                edx = (edx & 0xffffff00u) | t11;
                eax = 0u;
            }
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
            g->eax = eax << 3u;
            g->esp = sp0 - 0xcu;
            t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax << 3u, in_edi, in_esi);
            wr32(ebx, t12);
            if (rd32(arg3 + 0x24u) == rd32(arg3 + 0x28u))
            {
                ecx = t12;
                goto L_102561f8;
            }
            eax = rd32(arg3 + 0x24u);
            ecx = t12;
            edx = rd32(arg3 + 0x28u);
L_102561e0: ;
            if (ecx != 0u)
            {
                wr32(ecx, rd32(eax));
                t13 = rd32(eax + 4u);
                wr32(ecx + 4u, t13);
            }
            if (eax + 8u != edx)
            {
                eax = eax + 8u;
                ecx = ecx + 8u;
                goto L_102561e0;
            }
            ecx = ecx + 8u;
L_102561f8: ;
            t14 = rd32(sp0 + 4u);
            wr32(ebx + 4u, ecx);
            wr32(ebx + 8u, ecx);
            eax = t14;
        }
        t15 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, eax + 0x30u);
        wr32(sp0 + 8u, t15 + 0x30u);
        if (loc_4 != 1u)
        {
            eax = eax + 0x30u;
            ecx = loc_4 - 1u;
            edx = t15 + 0x30u;
            loc_4 = loc_4 - 1u;
            goto L_102560d4;
        }
        loc_4 = loc_4 - 1u;
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102560b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102560b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
