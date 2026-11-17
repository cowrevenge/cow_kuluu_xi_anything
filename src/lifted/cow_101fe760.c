/* f_0x101fe760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fe760(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    wr32(self + 8u, 0x201u);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->esp = sp0 - 0x10u;
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
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t4, in_edi, in_esi);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
            ebp = 0u;
        }
        else
        {
            edx = t7;
            ebp = t6;
            esi = t5;
            if ((int32_t)(esi - 1u) < 0)
            {
                eax = esi - 1u;
            }
            else
            {
                eax = esi - 1u;
                ebx = ebp;
                esi = eax + 1u;
L_101fe7b8: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t9 = g->edx;
                if (esi != 1u)
                {
                    eax = t8;
                    edx = t9;
                    ebx = ebx + 0x54u;
                    esi = esi - 1u;
                    goto L_101fe7b8;
                }
                eax = t8;
                edx = t9;
            }
        }
        wr32(self + 0xcu, ebp);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x101fe5f0u), self, 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = cow_cdecl(g, COW_IMG(0x100e6050u), 1, 0u);
    if (t13 != 0u)
    {
        ebp = t13;
        ebp = ebp + 8u;
        esi = 0x7080u;
L_101fe7ef: ;
        if ((int32_t)(esi - 0x7080u & 0x80000007u) >= 0)
        {
            eax = esi - 0x7080u;
            ecx = esi - 0x7080u & 0x80000007u;
        }
        else
        {
            eax = esi - 0x7080u;
            ecx = esi - 0x7080u & 0x80000007u;
            ecx = (ecx - 1u | 0xfffffff8u) + 1u;
        }
        if ((rd8(ebp + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)(1u << (ecx & 0x1fu))) != 0u)
        {
            edx = (uint32_t)((int32_t)eax >> 0x1fu) & 7u;
            eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 7u)) >> 3u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t14 = cow_call_regs(g, COW_IMG(0x101fe540u), eax, self, g->edx, 0, 1, esi);
            t15 = g->edx;
            if ((uint8_t)t14 != 0u)
            {
                eax = t14;
                edx = t15;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t16 = cow_stdcall(g, COW_IMG(0x101fe4d0u), 1, esi);
                t17 = g->edx;
                if ((uint8_t)t16 != 0u)
                {
                    eax = t16;
                    edx = t17;
                    g->eax = eax;
                    g->edx = edx;
                    t18 = rd32(COW_IMG(0x10663aacu));
                    g->esp = sp0 - 0x10u;
                    t19 = cow_thiscall(g, COW_IMG(0x101fd9f0u), t18, 1, esi);
                    t20 = g->ecx;
                    t21 = g->edx;
                    if (t19 == 0u)
                    {
                        eax = t19;
                        ecx = t20;
                        if (rd16(ecx + 0x32u) != esi)
                        {
                            edx = rd16(ecx + 0x32u);
                            loc_14 = 0x2a6u;
                            loc_18 = 0x80808080u;
                        }
                        else
                        {
                            edx = rd16(ecx + 0x32u);
                            loc_14 = 0x2a6u;
                            loc_18 = 0x80804020u;
                        }
                    }
                    else
                    {
                        eax = t19;
                        edx = t21;
                        loc_14 = 0x2a6u;
                        loc_18 = 0x80509050u;
                    }
                }
                else
                {
                    eax = t16;
                    edx = t17;
                    loc_14 = 0x2a7u;
                    loc_18 = 0x80404040u;
                }
                g->esp = sp0 - 0x10u;
                cow_fastcall(g, COW_IMG(0x101fe580u), self, edx, 3, esi, loc_18, loc_14);
            }
        }
        if ((int32_t)(esi - 0x707fu) < 512)
        {
            esi = esi + 1u;
            goto L_101fe7ef;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fe760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
