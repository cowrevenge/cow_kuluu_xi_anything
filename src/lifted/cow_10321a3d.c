/* f_0x10321a3d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10321a3d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x14u);
    wr32(t1, 0u);
    t2 = rd32(sp0 + 8u);
    wr32(arg4, 1u);
    if (t2 == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t1;
        edi = t2;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = t1;
        edi = t2;
        wr32(edi, arg3);
        wr32(sp0 + 8u, edi + 4u);
        edi = edi + 4u;
    }
    if (rd8(eax) != 0x22u)
    {
        edx = in_edx;
        esi = arg3;
        goto L_10321ab0;
    }
    edx = in_edx;
    esi = arg3;
L_10321a6c: ;
    if (rd8(eax + 1u) == 0x22u)
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_10321a9e;
    }
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    eax = eax + 1u;
    if ((uint8_t)edx == 0u) goto L_10321a9e;
    if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)edx) & 4u) == 0u)
    {
        edx = (uint8_t)edx;
    }
    else
    {
        edx = (uint8_t)edx;
        wr32(ecx, rd32(ecx) + 1u);
        if (esi != 0u)
        {
            t3 = rd8(eax);
            wr8(esi, (uint8_t)t3);
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t3;
            esi = esi + 1u;
        }
    }
    wr32(ecx, rd32(ecx) + 1u);
    if (esi != 0u)
    {
        t4 = rd8(eax);
        wr8(esi, (uint8_t)t4);
        edx = (edx & 0xffffff00u) | t4;
        esi = esi + 1u;
    }
    goto L_10321a6c;
L_10321a9e: ;
    wr32(ecx, rd32(ecx) + 1u);
    if (esi != 0u)
    {
        wr8(esi, 0u);
        esi = esi + 1u;
    }
    if (rd8(eax) == 0x22u)
    {
        eax = eax + 1u;
    }
L_10321af3: ;
    wr32(sp0 + 0x14u, 0u);
L_10321af7: ;
    if (rd8(eax) == 0u) goto L_10321be0;
L_10321b00: ;
    if (rd8(eax) == 0x20u)
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        goto L_10321b0c;
    }
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)edx != 9u) goto L_10321b0f;
L_10321b0c: ;
    eax = eax + 1u;
    goto L_10321b00;
L_10321ab0: ;
    wr32(ecx, rd32(ecx) + 1u);
    if (esi != 0u)
    {
        t5 = rd8(eax);
        wr8(esi, (uint8_t)t5);
        edx = (edx & 0xffffff00u) | t5;
        esi = esi + 1u;
    }
    if ((rd8(COW_IMG(0x109f9561u) + rd8(eax)) & 4u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        eax = eax + 1u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        ebx = rd8(eax);
        eax = eax + 1u;
        wr32(ecx, rd32(ecx) + 1u);
        if (esi != 0u)
        {
            wr8(esi, rd8(eax));
            esi = esi + 1u;
        }
        eax = eax + 1u;
    }
    if ((uint8_t)edx == 0x20u) goto L_10321ae4;
    if ((uint8_t)edx == 0u) goto L_10321ae8;
    if ((uint8_t)edx != 9u) goto L_10321ab0;
L_10321ae4: ;
    if ((uint8_t)edx != 0u) goto L_10321aeb;
L_10321ae8: ;
    eax = eax - 1u;
    goto L_10321af3;
L_10321aeb: ;
    if (esi != 0u)
    {
        wr8(esi - 1u, 0u);
    }
    goto L_10321af3;
L_10321b0f: ;
    if (rd8(eax) == 0u) goto L_10321be0;
    if (edi != 0u)
    {
        wr32(edi, esi);
        wr32(sp0 + 8u, edi + 4u);
        edi = edi + 4u;
    }
    wr32(arg4, rd32(arg4) + 1u);
L_10321b29: ;
    wr32(sp0 + 4u, 1u);
    ebx = 0u;
L_10321b32: ;
    if (rd8(eax) != 0x5cu) goto L_10321b3b;
    eax = eax + 1u;
    ebx = ebx + 1u;
    goto L_10321b32;
L_10321b3b: ;
    if (rd8(eax) == 0x22u)
    {
        if (!(ebx & 1u))
        {
            if (rd32(sp0 + 0x14u) == 0u) goto L_10321b59;
            if (rd8(eax + 1u) != 0x22u) goto L_10321b59;
            edx = eax + 1u;
            eax = edx;
L_10321b5c: ;
            t6 = rd32(sp0 + 0x14u) == 0u;
            t7 = rd32(sp0 + 8u);
            wr32(sp0 + 0x14u, t6);
            edi = t7;
        }
        ebx = ebx >> 1u;
    }
    if (ebx == 0u)
    {
        edx = ebx;
    }
    else
    {
        edx = ebx;
        ebx = ebx - 1u;
        ebx = ebx + 1u;
L_10321b74: ;
        if (esi != 0u)
        {
            wr8(esi, 0x5cu);
            esi = esi + 1u;
        }
        wr32(ecx, rd32(ecx) + 1u);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_10321b74;
        }
    }
    if (rd8(eax) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        goto L_10321bd1;
    }
    edx = (edx & 0xffffff00u) | rd8(eax);
    if (rd32(sp0 + 0x14u) != 0u) goto L_10321b97;
    if ((uint8_t)edx == 0x20u) goto L_10321bd1;
    if ((uint8_t)edx == 9u) goto L_10321bd1;
L_10321b97: ;
    if (rd32(sp0 + 4u) != 0u)
    {
        if (esi == 0u)
        {
            if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)edx) & 4u) != 0u)
            {
                wr32(ecx, rd32(ecx) + 1u);
                eax = eax + 1u;
            }
        }
        else
        {
            if ((rd8(COW_IMG(0x109f9561u) + (uint8_t)edx) & 4u) != 0u)
            {
                wr8(esi, (uint8_t)edx);
                wr32(ecx, rd32(ecx) + 1u);
                eax = eax + 1u;
                esi = esi + 1u;
            }
            wr8(esi, rd8(eax));
            esi = esi + 1u;
        }
        wr32(ecx, rd32(ecx) + 1u);
    }
    eax = eax + 1u;
    goto L_10321b29;
L_10321b59: ;
    wr32(sp0 + 4u, 0u);
    goto L_10321b5c;
L_10321bd1: ;
    if (esi != 0u)
    {
        wr8(esi, 0u);
        esi = esi + 1u;
    }
    wr32(ecx, rd32(ecx) + 1u);
    goto L_10321af7;
L_10321be0: ;
    if (edi != 0u)
    {
        wr32(edi, 0u);
    }
    wr32(arg4, rd32(arg4) + 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10321a3d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10321a3d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
