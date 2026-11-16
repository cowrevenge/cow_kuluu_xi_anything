/* f_0x101ceef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ceef0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = self;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101cebe0u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_101cef3c;
    }
    ecx = t2;
    edx = t3;
    eax = edx + 0x1041u;
    ecx = (ecx & 0xffffff00u) | 4u;
    edx = 0x5cu;
    ebx = in_ebx;
L_101cef12: ;
    if (rd8(eax - 1u) != rd8(arg1 + 5u))
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax - 1u);
    }
    else
    {
        if (rd8(eax) != rd32(arg1 + 0x10u))
        {
            ebx = rd8(eax);
        }
        else
        {
            ebx = rd8(eax);
            wr8(eax - 1u, 0u);
            wr8(eax, 0u);
            wr8(eax + 1u, (uint8_t)ecx);
        }
    }
    if (edx != 1u)
    {
        eax = eax + 5u;
        edx = edx - 1u;
        goto L_101cef12;
    }
    return;
L_101cef3c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101cead0u), arg1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101cef86;
    }
    edx = t6;
    eax = edx + 2u;
    ebx = in_ebx;
    esi = 0x14u;
L_101cef51: ;
    edx = 0x1au;
L_101cef56: ;
    if (rd8(eax - 2u) != rd8(arg1 + 5u))
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax - 2u);
    }
    else
    {
        if (rd8(eax) != rd32(arg1 + 0x10u))
        {
            ebx = rd8(eax);
        }
        else
        {
            ebx = rd8(eax);
            wr8(eax - 2u, 0u);
            wr8(eax, 0u);
            wr8(eax + 2u, 3u);
            wr16(eax + 4u, 0u);
        }
    }
    if (edx != 1u)
    {
        eax = eax + 8u;
        edx = edx - 1u;
        goto L_101cef56;
    }
    eax = eax + 8u;
    if (esi != 1u)
    {
        esi = esi - 1u;
        goto L_101cef51;
    }
    return;
L_101cef86: ;
    eax = edx + 3u;
    ecx = (ecx & 0xffffff00u) | 3u;
    ebx = in_ebx;
    esi = 0x14u;
L_101cef8b: ;
    edx = 0x1au;
L_101cef90: ;
    if (rd8(eax - 2u) != rd8(arg1 + 5u))
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax - 2u);
    }
    else
    {
        if (rd8(eax) != rd32(arg1 + 0x10u))
        {
            ebx = rd8(eax);
        }
        else
        {
            ebx = rd8(eax);
            t7 = rd8(eax - 3u);
            wr8(eax - 2u, 0u);
            wr8(eax, 0u);
            if ((uint8_t)t7 == 0u)
            {
                ebx = (ebx & 0xffffff00u) | t7;
                wr8(eax + 1u, (uint8_t)ecx);
            }
            else
            {
                ebx = (ebx & 0xffffff00u) | t7;
                wr8(eax + 1u, rd8(eax + 1u) | 2u);
            }
        }
    }
    if (edx != 1u)
    {
        eax = eax + 8u;
        edx = edx - 1u;
        goto L_101cef90;
    }
    eax = eax + 8u;
    if (esi != 1u)
    {
        esi = esi - 1u;
        goto L_101cef8b;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ceef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ceef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
