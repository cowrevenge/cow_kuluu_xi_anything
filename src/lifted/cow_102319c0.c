/* f_0x102319c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102319c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u) goto L_102319d5;
    if ((uint8_t)arg1 != 1u)
    {
        eax = in_eax;
        goto L_10231a7c;
    }
L_102319d5: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = in_eax;
        goto L_10231a7c;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10231a7c;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), ecx, 1, 1u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        goto L_10231a7c;
    }
    eax = t4;
    edx = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10221a30u), self, 0);
    t7 = g->edx;
    g->ecx = self;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, 0xbu, 0u, 8u);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = COW_IMG(0x10483164u) + ((uint8_t)arg1 << 0xcu);
    g->ecx = t9;
    g->edx = t10;
    cow_cdecl(g, COW_IMG(0x100fde80u), 2, COW_IMG(0x106689e0u), t11);
    t12 = g->ecx;
    t13 = g->edx;
    eax = 0u;
    ecx = t12;
    edx = t13;
    edi = COW_IMG(0x106689e0u);
L_10231a3d: ;
    if (rd8(edi) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edi);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(edi);
        if ((int32_t)eax >= 0)
        {
            if ((int32_t)eax < (int32_t)rd32(self + 0x44u))
            {
                if (eax * 8u + rd32(self + 0x20u) == 0u)
                {
                    edx = eax * 8u + rd32(self + 0x20u);
                }
                else
                {
                    edx = eax * 8u + rd32(self + 0x20u);
                    wr32(edx, (uint8_t)ecx);
                    eax = eax + 1u;
                    ecx = (uint8_t)ecx;
                }
            }
        }
    }
    if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x10668a40u))
    {
        edi = edi + 8u;
        goto L_10231a3d;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, eax, 0u);
    return (t14 & 0xffffff00u) | 1u;
L_10231a7c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102319c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102319c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
