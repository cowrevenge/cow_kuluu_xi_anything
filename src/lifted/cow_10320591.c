/* f_0x10320591 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10320591(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1);
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t3;
        edx = t4;
        esi = t1;
        edi = t2;
        if (rd32(edi + 0x40u) != 0u) goto L_103205c8;
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x24u, in_edi, in_esi);
        wr32(edi + 0x40u, t5);
        if (t5 == 0u)
        {
            ecx = COW_IMG(0x109b28a0u);
            goto L_103205cb;
        }
L_103205c8: ;
        ecx = rd32(edi + 0x40u);
L_103205cb: ;
        t6 = cow_divs(g, esi, 0x7861f80u);
        t7 = cow_mods(g, esi, 0x7861f80u);
        if ((int32_t)(esi - t6 * 0x7861f80u) < 31536000)
        {
            edx = t6 * 4u + 0x46u;
            ebx = 0u;
            esi = esi - t6 * 0x7861f80u;
        }
        else
        {
            edx = t6 * 4u + 0x46u;
            esi = esi - t6 * 0x7861f80u;
            if ((int32_t)(esi - 0x1e13380u) < 31536000)
            {
                edx = edx + 1u;
                ebx = 0u;
                esi = esi - 0x1e13380u;
            }
            else
            {
                edx = edx + 1u;
                esi = esi - 0x1e13380u;
                if ((int32_t)(esi - 0x1e13380u) < 31622400)
                {
                    edx = edx + 1u;
                    esi = esi - 0x1e13380u;
                    ebx = 1u;
                }
                else
                {
                    edx = edx + 1u;
                    esi = esi - 0x1e13380u;
                    edx = edx + 1u;
                    ebx = 0u;
                    esi = esi - 0x1e28500u;
                }
            }
        }
        wr32(ecx + 0x14u, edx);
        t8 = cow_divs(g, esi, 0x15180u);
        t9 = cow_mods(g, esi, 0x15180u);
        wr32(ecx + 0x1cu, t8);
        if (ebx != 0u)
        {
            esi = esi - t8 * 0x15180u;
            edi = COW_IMG(0x103d37a8u);
        }
        else
        {
            esi = esi - t8 * 0x15180u;
            edi = COW_IMG(0x103d37dcu);
        }
        eax = 1u;
        edx = rd32(ecx + 0x1cu);
        ebx = edi + 4u;
L_10320639: ;
        if ((int32_t)rd32(ebx) >= (int32_t)edx) goto L_10320643;
        eax = eax + 1u;
        ebx = ebx + 4u;
        goto L_10320639;
    }
    else
    {
        edx = t4;
        eax = 0u;
    }
L_10320697: ;
    g->edx = edx;
    return eax;
L_10320643: ;
    t10 = rd32(ecx + 0x1cu);
    wr32(ecx + 0x10u, eax - 1u);
    t11 = t10 - rd32(eax * 4u + edi - 4u);
    wr32(ecx + 0xcu, t11);
    t12 = cow_divs(g, rd32(arg1), 0x15180u);
    t13 = cow_mods(g, rd32(arg1), 0x15180u);
    t14 = cow_divs(g, t12 + 4u, 7u);
    t15 = cow_mods(g, t12 + 4u, 7u);
    wr32(ecx + 0x18u, t15);
    t16 = cow_divs(g, esi, 0xe10u);
    t17 = cow_mods(g, esi, 0xe10u);
    wr32(ecx + 8u, t16);
    t18 = esi - t16 * 0xe10u;
    t19 = cow_divs(g, t18, 0x3cu);
    t20 = cow_mods(g, t18, 0x3cu);
    wr32(ecx + 4u, t19);
    wr32(ecx + 0x20u, 0u);
    t21 = t18 - t19 * 0x3cu;
    wr32(ecx, t21);
    eax = ecx;
    edx = t20;
    goto L_10320697;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320591(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10320591(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
