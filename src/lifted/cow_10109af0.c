/* f_0x10109af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10109af0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        if (rd16(eax + 2u) <= 1u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            t1 = rd32(eax + 4u);
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x101092c0u), t1, self, g->edx, 0, 1, t1);
            t2 = g->ecx;
            t3 = g->edx;
            ecx = t2;
            edx = t3;
        }
    }
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10109b2d;
    }
    eax = rd32(self + 4u);
    if (rd32(eax + 4u) == 0u)
    {
        edi = 0u;
        goto L_10109c38;
    }
    ecx = rd32(eax + 4u);
    if (eax == 0u) goto L_10109b2d;
    esi = ecx;
L_10109b2f: ;
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        edi = 0u;
        goto L_10109c30;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    edi = 0u;
L_10109b3d: ;
    if ((uint16_t)edi >= (uint16_t)arg2) goto L_10109c30;
L_10109b48: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, (uint8_t)eax);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10109b67;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10109b48;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_10109c30: ;
    if (rd8(esi) != 0x22u) goto L_10109c38;
L_10109c35: ;
    wr8(esi, 0u);
L_10109c38: ;
    if ((uint16_t)edi >= (uint16_t)arg2)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)edi;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)edi;
        wr32(arg1 + (uint16_t)edi * 4u, 0u);
    }
    return eax;
L_10109b2d: ;
    esi = 0u;
    goto L_10109b2f;
L_10109b67: ;
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10109c30;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax != 0x22u) goto L_10109bb9;
    wr8(esi, 0u);
    wr32(arg1 + (uint16_t)edi * 4u, esi + 1u);
    if (rd8(esi + 1u) == 0u)
    {
        eax = (edi & 0xff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_10109c26;
    }
    eax = (edi & 0xff00u) | rd8(esi + 1u);
    esi = esi + 1u;
    edi = edi + 1u;
L_10109b8f: ;
    if ((uint8_t)eax == 0x22u) goto L_10109bb4;
    if ((int8_t)eax >= 0) goto L_10109b9e;
    if (rd8(esi + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109ba9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
L_10109b9e: ;
    if ((uint8_t)eax != 0x5cu) goto L_10109baa;
    if (rd8(esi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109baa;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
L_10109ba9: ;
    esi = esi + 1u;
L_10109baa: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10109b8f;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_10109c26: ;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10109b3d;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    goto L_10109c30;
L_10109bb4: ;
    zf = rd8(esi) == 0u;
L_10109c20: ;
    if (!zf)
    {
        wr8(esi, 0u);
        esi = esi + 1u;
    }
    goto L_10109c26;
L_10109bb9: ;
    if ((uint8_t)arg3 == 0u) goto L_10109bc1;
    if ((uint8_t)arg3 == (uint8_t)eax) goto L_10109c30;
L_10109bc1: ;
    wr32(arg1 + (uint16_t)edi * 4u, esi);
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        ecx = (uint16_t)edi;
        edi = edi + 1u;
        goto L_10109c14;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    ecx = (uint16_t)edi;
    edi = edi + 1u;
L_10109bd4: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, (uint8_t)eax);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10109c14;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if (rd8(esi) == 0x22u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10109c14;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((int8_t)eax >= 0) goto L_10109bfa;
    if (rd8(esi + 1u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109bfa;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_10109c0c: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10109bd4;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_10109c14: ;
    if ((uint8_t)arg3 == rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10109c35;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax == 0u) goto L_10109c30;
    zf = (uint8_t)((uint8_t)eax - 0x22u) == 0u;
    goto L_10109c20;
L_10109bfa: ;
    if ((uint8_t)eax != 0x5cu) goto L_10109c08;
    if (rd8(esi + 1u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        goto L_10109c08;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
    goto L_10109c0c;
L_10109c08: ;
    if ((uint8_t)arg3 == (uint8_t)eax) goto L_10109c14;
    goto L_10109c0c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109af0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
