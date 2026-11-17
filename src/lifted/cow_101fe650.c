/* f_0x101fe650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101fe650(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(self + 0xcu);
    wr32(self + 8u, 0x241u);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(self + 0xcu, 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
    }
    else
    {
        t4 = rd32(self + 8u) * 0x54u;
        g->eax = t4;
        t5 = rd32(self + 8u);
        g->esp = sp0 - 0xcu;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t4, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            ebp = 0u;
        }
        else
        {
            ecx = t7;
            edx = t8;
            ebp = t6;
            edi = t5;
            if ((int32_t)(edi - 1u) < 0)
            {
                eax = edi - 1u;
            }
            else
            {
                eax = edi - 1u;
                ebx = ebp;
                edi = eax + 1u;
L_101fe6b1: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t10 = g->ecx;
                t11 = g->edx;
                if (edi != 1u)
                {
                    eax = t9;
                    edx = t11;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101fe6b1;
                }
                eax = t9;
                ecx = t10;
                edx = t11;
            }
        }
        wr32(self + 0xcu, ebp);
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x100e6050u), 1, 0u);
    if (t12 != 0u)
    {
        ebp = t12;
        goto L_101fe6de;
    }
    eax = t12;
    return 0xffffffffu;
L_101fe6de: ;
    edi = 0u;
    loc_4 = 0xffffffffu;
L_101fe6e0: ;
    if ((int32_t)(edi & 0x80000007u) >= 0)
    {
        ecx = edi & 0x80000007u;
    }
    else
    {
        ecx = edi & 0x80000007u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    if ((rd8(ebp + (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)(1u << (ecx & 0x1fu))) != 0u)
    {
        if (rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u) != edi + 0x7040u)
        {
            eax = edi + 0x7040u;
            edx = rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u);
            g->esp = sp0 - 0x14u;
            cow_fastcall(g, COW_IMG(0x101fe580u), self, edx, 3, eax, 0x80808080u, 0x2a5u);
        }
        else
        {
            eax = edi + 0x7040u;
            edx = rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t13 = cow_fastcall(g, COW_IMG(0x101fe580u), self, edx, 3, eax, 0x80509050u, 0x2a5u);
            loc_4 = t13;
        }
    }
    if ((int32_t)(edi + 1u) < 64)
    {
        edi = edi + 1u;
        goto L_101fe6e0;
    }
    return loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fe650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
