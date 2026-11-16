/* f_0x10255de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10255de0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) == arg2)
    {
        loc_4 = self;
    }
    else
    {
        eax = rd32(sp0 + 0xcu);
        ecx = rd32(sp0 + 4u);
        edx = eax + 0x24u;
        esi = ecx + 0x14u;
        loc_4 = eax + 0x24u;
L_10255e03: ;
        if (eax != 0u)
        {
            wr8(eax, rd8(ecx));
            if (rd32(esi - 0x10u) != 0u)
            {
                eax = rd32(esi - 0x10u);
                q1 = (int64_t)cow_muls(0x92492493u, rd32(esi - 0xcu) - eax);
                t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(esi - 0xcu) - eax) >> 4u);
                edx = t2 + (t2 >> 0x1fu);
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
            t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 0x1cu, edx, 1, 3, eax * 0x1cu, in_edi, in_esi);
            wr32(loc_4 - 0x20u, t3);
            if (rd32(esi - 0x10u) == rd32(esi - 0xcu))
            {
                eax = t3;
                edx = loc_4;
                edi = t3;
                goto L_10255e78;
            }
            eax = t3;
            edx = loc_4;
            ebx = rd32(esi - 0x10u);
            ebp = rd32(esi - 0xcu);
            edi = t3;
L_10255e62: ;
            if (edi != 0u)
            {
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t4 = cow_call_regs(g, COW_IMG(0x10255f70u), eax, edi, g->edx, 0, 1, ebx);
                t5 = g->edx;
                eax = t4;
                edx = t5;
            }
            if (ebx + 0x1cu != ebp)
            {
                ebx = ebx + 0x1cu;
                edi = edi + 0x1cu;
                goto L_10255e62;
            }
            edi = edi + 0x1cu;
L_10255e78: ;
            wr32(loc_4 - 0x1cu, edi);
            wr32(loc_4 - 0x18u, edi);
            wr8(loc_4 - 0x14u, rd8(esi - 4u));
            if (rd32(esi) != 0u)
            {
                ecx = rd32(esi);
                ebx = loc_4;
                eax = (uint32_t)((int32_t)(rd32(esi + 4u) - ecx) >> 2u);
            }
            else
            {
                ebx = loc_4;
                eax = 0u;
            }
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 4u, edx, 1, 3, eax * 4u, in_edi, in_esi);
            wr32(ebx - 0x10u, t6);
            if (rd32(esi) == rd32(esi + 4u))
            {
                eax = t6;
                edx = rd32(esi + 4u);
                goto L_10255ece;
            }
            eax = t6;
            ecx = rd32(esi);
            edx = rd32(esi + 4u);
L_10255ebc: ;
            if (eax != 0u)
            {
                wr32(eax, rd32(ecx));
            }
            if (ecx + 4u != edx)
            {
                eax = eax + 4u;
                ecx = ecx + 4u;
                goto L_10255ebc;
            }
            eax = eax + 4u;
L_10255ece: ;
            wr32(ebx - 0xcu, eax);
            wr32(ebx - 8u, eax);
            t7 = rd8(esi + 0xcu);
            wr8(ebx - 4u, (uint8_t)t7);
            if (rd32(esi + 0x10u) != 0u)
            {
                ecx = rd32(esi + 0x10u);
                edx = (edx & 0xffffff00u) | t7;
                eax = (uint32_t)((int32_t)(rd32(esi + 0x14u) - ecx) >> 3u);
            }
            else
            {
                ecx = rd32(esi + 0x10u);
                edx = (edx & 0xffffff00u) | t7;
                eax = 0u;
            }
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
            g->eax = eax << 3u;
            g->esp = sp0 - 0xcu;
            t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax << 3u, in_edi, in_esi);
            wr32(ebx, t8);
            if (rd32(esi + 0x10u) == rd32(esi + 0x14u))
            {
                ecx = t8;
                goto L_10255f25;
            }
            eax = rd32(esi + 0x10u);
            ecx = t8;
            edx = rd32(esi + 0x14u);
L_10255f0d: ;
            if (ecx != 0u)
            {
                wr32(ecx, rd32(eax));
                t9 = rd32(eax + 4u);
                wr32(ecx + 4u, t9);
            }
            if (eax + 8u != edx)
            {
                eax = eax + 8u;
                ecx = ecx + 8u;
                goto L_10255f0d;
            }
            ecx = ecx + 8u;
L_10255f25: ;
            t10 = rd32(sp0 + 0xcu);
            wr32(ebx + 4u, ecx);
            wr32(ebx + 8u, ecx);
            eax = t10;
            ecx = rd32(sp0 + 4u);
        }
        wr32(sp0 + 0xcu, eax + 0x30u);
        wr32(sp0 + 4u, ecx + 0x30u);
        if (ecx + 0x30u != arg2)
        {
            eax = eax + 0x30u;
            ecx = ecx + 0x30u;
            edx = arg2;
            esi = esi + 0x30u;
            loc_4 = loc_4 + 0x30u;
            goto L_10255e03;
        }
        loc_4 = loc_4 + 0x30u;
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10255de0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
