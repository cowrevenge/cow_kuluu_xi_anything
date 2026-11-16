/* f_0x101d52d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d52d0(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self) != 0u)
    {
        eax = in_eax;
        ecx = self;
        goto L_101d5362;
    }
    if (rd8(self + 1u) != (uint8_t)arg1)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 1u);
        ecx = self;
        goto L_101d52f3;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 1u);
    if (rd8(self + 2u) == (uint8_t)arg2)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        ecx = (self & 0xffffff00u) | rd8(self + 2u);
        goto L_101d5362;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    ecx = (self & 0xffffff00u) | rd8(self + 2u);
L_101d52f3: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x100a0080u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = (uint16_t)eax;
        g->edx = edx;
        t4 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xa0u);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (t4 == 0u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
        }
        else
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            edi = t4;
            if (eax != 0u)
            {
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t8 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x13aeu, 0x6e69616du, eax, edi, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                eax = t8;
                ecx = t9;
                edx = t10;
            }
        }
    }
    wr8(self + 1u, (uint8_t)arg1);
    wr8(self + 2u, (uint8_t)arg2);
    wr8(self, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = (edx & 0xffffff00u) | (uint8_t)arg2;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 0u, 1u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u) goto L_101d5367;
    eax = t11;
    ecx = t12;
    edx = t13;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10144d50u), 0);
    return;
L_101d5362: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
L_101d5367: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d52d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d52d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
